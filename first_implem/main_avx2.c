#include <stdio.h>
#include <stdlib.h>
#include "ffi_elt.h"

#define NBR_TEST 1

long long cpucycles(void) {
  unsigned long long result;
  __asm__ volatile(".byte 15;.byte 49;shlq $32,%%rdx;orq %%rdx,%%rax" : "=a" (result) ::  "%rdx");
  return result;
}

int main() {
  // float tab[5] = {1,2,3,4,5};
  // float tab2[5] = {1,2,3,4,5};
  // __m256i a = _mm256_set_epi64x(15, 20, 25, 30);
  // __m256i b = _mm256_set_epi64x(15, 20, 25, 30);
  //
  // long long t5 = cpucycles();
  // add(tab, tab2);
  // long long t6 = cpucycles();
  //
  // long long t7 = cpucycles();
  // __m256i c = add_avx(a, b);
  // long long t8 = cpucycles();
  //
  // printf("CPU Cycles: %lld CPU cycles\n", t6 - t5);
  // printf("CPU Cycles: %lld CPU cycles\n", t8 - t7);
  //
  // int64_t* values = (int64_t*) &c;
  // for(int i = 0; i < 4; ++i){
  //   printf("%ld \n", values[i]);
  // }


  uint64_t tab1[4] = {1534345, 14300953, 104002000, 193294};
  uint64_t tab2[4] = {4843838, 74646, 89878971, 77777777777};
  uint64_t result[2] = {1152939096822257163, 65536};
  uint64_t output[4] = {0};
  // __m256i a = _mm256_set_epi64x(1534345, 14300953, 104002000, 193294);
  // __m256i b = _mm256_set_epi64x(4843838, 74646, 89878971, 77777777777);
  // __m256i c;
  //
  // long long t5 = cpucycles();
  // for(int i = 0; i < 4; ++i){
  //   result[i] = tab1[i] + tab2[i];
  // }
  // long long t6 = cpucycles();
  //
  // long long t7 = cpucycles();
  // c = _mm256_add_epi64(a, b);
  // long long t8 = cpucycles();
  long long int S = 0;
  for(int i = 0; i < NBR_TEST; ++i){
    long long t7 = cpucycles();
    square(output, result, 2);
    long long t8 = cpucycles();
    S += (t8 - t7);
  }
  for(int i = 0; i < 5; ++i){
    printf("output[%d]: %lu\n", i, output[i]);
  }
  // long long t7 = cpucycles();
  // square(result, 1);
  // long long t8 = cpucycles();
  // printf("CPU Cycles: %lld CPU cycles\n", t6 - t5);
  // printf("CPU Cycles: %lld CPU cycles\n", t8 - t7);

  /* output : 369435925020741 72057594054705152 4294967296 0 */

  printf("CPU cycle average on %d tests: %lld\n", NBR_TEST, S/NBR_TEST);
  return 0;

}
