#include <stdio.h>
#include <stdlib.h>
#include "ffi_elt.h"

int table[16] = {0,1,4,5,16,17,21,20,64,65,68,69,80,81,84,85};


__m256i add_avx(__m256i a, __m256i b) {
  return _mm256_add_epi64(a, b);
}


/*
goal: compute a(z)^2 from a polynomial a(z) stored in a vector of size 64-bit word
input: *o a vector containing a(z)^2, *a the polynomial to square, size -> size of a
*/
void square(__m128i *o, uint64_t* a, int size){
  /* mask used to get split representation a = a_l + a_h*z^4
    lookup table -> store all the squares u(z)^2 of all 4-bits polynomials u(z)*/
   __m128i mask = _mm_set_epi64x(0x0F0F0F0F0F0F0F0F, 0x0F0F0F0F0F0F0F0F);
   __m128i lookup_table = _mm_set_epi64x(0x5554515045444140, 0x1514111005040100);

   for(int i = 0; i <= size/2 ; ++i){
      int j = i;
     // printf("\ni :%d",i);
     /*  build a_0 = [0, a[i]] a 128-bit value */
     /*  a_l = a_0 & mask ; a_h = (a_0 >> 4) & mask */
     __m128i a_0 = _mm_set_epi64x(a[i+1+j], a[i+j]);
     __m128i a_l = _mm_and_si128(a_0, mask);
     __m128i a_h = _mm_and_si128(_mm_srli_epi64(a_0, 4), mask);

     /*  Perform parallel table lookup */
     a_l = _mm_shuffle_epi8(lookup_table, a_l);
     a_h = _mm_shuffle_epi8(lookup_table, a_h);

     /* Simulate addition with 8-bit offset */
     o[2*i] = _mm_unpacklo_epi8(a_l, a_h);
     o[2*i+1] = _mm_unpackhi_epi8(a_l, a_h);
  }
}

/*
goal: compute sqrt(a(z)) from a polynomial a(z) stored in a vector of size 64-bit word
input: *o a vector containing sqrt(a(z)), *a the polynomial whose we want to compute its square root, size -> degree of a
*/
void square_root(uint64_t* o, uint64_t* a, int size){
  /* permutation mask to divide a 128-bit vlaue in bytes with and even indexes */
  __m128i perm = _mm_set_epi64x(0x0F0D0B0907050301, 0x0E0C0A0806040200);

  /* table to divide a low nibble in bits with odd and even indexes*/
  __m128i sqrt_l = _mm_set_epi64x(0x3332232231302120, 0x1312030211100100);

  /* table to divide a high nibble in bits with odd and even indexes -> sqrt_l << 2*/
  __m128i sqrt_h = _mm_set_epi64x(0x0CCC88C88C4C08480, 0x4C480C0844400400);

  /* bit masks to convert to split representation */
  __m128i mask_l = _mm_set_epi64x(0x0F0F0F0F0F0F0F0F,0x0F0F0F0F0F0F0F0F);
  __m128i mask_h = _mm_set_epi64x(0xF0F0F0F0F0F0F0F0,0xF0F0F0F0F0F0F0F0);

  uint64_t a_even = 0;
  uint64_t a_odd = 0;

  for(int i = 0; i <= size/2; ++i){
    __m128i tmp = _mm_set_epi64x(a[i+1], a[i]);
    __m128i tmp1 = _mm_shuffle_epi8(tmp, perm);

    /* convert permuted vector to split representation */
    __m128i a_l = _mm_and_si128(tmp1, mask_l);
    __m128i tmp2 = _mm_and_si128(tmp1, mask_h);
    __m128i a_h = _mm_srli_epi64(tmp2, 4);

    /* extract a_l_odd(z) + a_l_even in a_l and a_h_odd*z^2 + a_h_even*z^2*/
    __m128i tmp3 = _mm_shuffle_epi8(sqrt_l, a_l);
    __m128i tmp4 = _mm_shuffle_epi8(sqrt_h, a_h);

    /* compute a_l_odd + a_l_even + a_h_odd*z^2 + a_h_even*z^2 */
    tmp1 = _mm_xor_si128(tmp3, tmp4);

    /* compute u =a _l_even + a_h_even*z^2 and v = a_l_odd + a_h_odd*z^2 */
    a_l = _mm_and_si128(tmp1, mask_l);
    a_h = _mm_and_si128(tmp1, mask_h);

    /* now we compute in 64-bits registers */
    a_even += (a_l[0] | (a_l[1] << 4));
    a_odd  += (a_h[1] | (a_h[0] >> 4));
  }
  o[0] = a_even;
  o[1] = a_odd;
}
