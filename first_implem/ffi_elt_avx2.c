#include <stdio.h>
#include <stdlib.h>
#include "ffi_elt.h"

int table[16] = {0,1,4,5,16,17,21,20,64,65,68,69,80,81,84,85};

void add(const float* a, const float* b) {
  float d[5];
  for(int i=0; i<5; i++){
    d[i] = a[i] + b[i];
  }
}


__m256i add_avx(__m256i a, __m256i b) {
  return _mm256_add_epi64(a, b);
}

void square(uint64_t* a, int size){
   __m128i tmp = _mm_setzero_si128();
   __m128i tmp2 = _mm_setzero_si128();
   __m128i tmp3 = _mm_setzero_si128();
   __m128i a_0 = _mm_setzero_si128();
   __m128i a_l = _mm_setzero_si128();
   __m128i a_h = _mm_setzero_si128();
   __m128i mask = _mm_set_epi64x(0x0F0F0F0F0F0F0F0F, 0x0F0F0F0F0F0F0F0F);
   __m128i lookup_table = _mm_set_epi8(85,84,81,80,69,68,65,64,21,20,17,16,5,4,1,0);
   uint64_t output[4] = {0};

   for(int i = 0; i < size/2 + 1; i++){
     /*  load a_0 = a[2i] a 128-bit value */
     /*  a_l = a_0 & mask ; a_h = (a_0 >> 4) & mask */
     a_0 = _mm_set_epi64x(0, a[i]);
     a_l = _mm_and_si128(a_0, mask);
     tmp = _mm_srli_epi64(a_0, 4);
     a_h = _mm_and_si128(tmp, mask);

     /*  Perform parallel table lookup*/
     tmp2 = _mm_shuffle_epi8(lookup_table, a_l);
     tmp3 = _mm_shuffle_epi8(lookup_table, a_h);

     /* Simulate addition with 8-bit offset */
     __m128i interlo = _mm_unpacklo_epi8(tmp2, tmp3);
     __m128i interhi = _mm_unpackhi_epi8(tmp2, tmp3);
     printf(" output[%d]: %lld -- %lld\n",2*i, interlo[0], interlo[1]);
     printf(" output[%d]: %lld -- %lld\n",2*i+1, interhi[0], interhi[1]);

     /* DISPLAY VARIABLE */
     // printf("check whats in a_0:\n%lld\n%lld\n",a_0[0], a_0[1]);
     // printf("check whats in a_l:\n%lld\n%lld\n",a_l[0], a_l[1]);
     // printf("check whats in a_0 >> 4:\n%lld\n%lld\n",tmp[0], tmp[1]);
     // printf("check whats in a_h:\n%lld\n%lld\n",a_h[0], a_h[1]);
     // printf("check shuffle a_l:\n%lld\n%lld\n",tmp[20], tmp2[1]);
     // printf("check shuffle a_h:\n%lld\n%lld\n",tmp3[0], tmp3[1]);
     // printf("check interlo:\n%lld\n%lld\n",interlo[0], interlo[1]);
     // printf("check interhi:\n%lld\n%lld\n",interhi[0], interhi[1]);

    }

}
