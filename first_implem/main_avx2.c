#include <stdio.h>
#include <stdlib.h>
#include "ffi_elt.h"


long long cpucycles(void) {
  unsigned long long result;
  __asm__ volatile(".byte 15;.byte 49;shlq $32,%%rdx;orq %%rdx,%%rax" : "=a" (result) ::  "%rdx");
  return result;
}

int main() {

  uint64_t tab1[4] = {1534345, 14300953, 104002000, 193294};
  uint64_t tab2[4] = {4843838, 74646, 89878971, 77777777777};
  uint64_t result[2] = {1152939096822257163, 65536};
  uint64_t result2[1] = {1073873161};
  __m128i output1[2] = {_mm_setzero_si128(), _mm_setzero_si128()};
  uint64_t output2[8] = {0};

  long long int S = 0;
  for(int i = 0; i < NBR_TEST; ++i){
    long long t7 = cpucycles();
    square(output1, result, 2);
    long long t8 = cpucycles();
    S += (t8 - t7);
  }
  printf("CPU cycle average for squaring on %d tests: %lld\n", NBR_TEST, S/NBR_TEST);

  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 2; ++j){
      printf("output1[%d][%d]: %lld\n", i, j, output1[i][j]);
    }
  }
  /* output expected: 369435925020741 72057594054705152 4294967296 0 */

  long long int S2 = 0;
  for(int i = 0; i < NBR_TEST; ++i){
    long long t9 = cpucycles();
    square_root(output2, result2, 1);
    long long t10 = cpucycles();
    S2 += (t10 - t9);
  }
  printf("CPU cycle average for square_root on %d tests: %lld\n", NBR_TEST, S2/NBR_TEST);
  printf("c(z) = %lu + sqrt(z) * %lu\n", output2[0], output2[1]);
  return 0;
}
