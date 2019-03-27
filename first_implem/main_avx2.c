#include <stdio.h>
#include <stdlib.h>
#include "ffi_elt.h"


long long cpucycles(void) {
  unsigned long long result;
  __asm__ volatile(".byte 15;.byte 49;shlq $32,%%rdx;orq %%rdx,%%rax" : "=a" (result) ::  "%rdx");
  return result;
}

int main() {

  uint64_t input[4] = {3318823961600280199,15513260515259129844,3};

  __m128i output[3] = {_mm_setzero_si128(),_mm_setzero_si128(),_mm_setzero_si128()};
  uint64_t output2[16] = {0};

  long long int S = 0;
  for(int i = 0; i < NBR_TEST; ++i){
    long long t7 = cpucycles();
    square(output, input, 3);
    long long t8 = cpucycles();
    S += (t8 - t7);
  }
  printf("\n############################# SQUARING #############################");
  printf("\nCPU cycle average for squaring on %d tests: %lld\n", NBR_TEST, S/NBR_TEST);

  printf("OUTPUT FOR SQUARING with the polynomial: a[%lu, %lu]\n",input[1],input[0]);
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 2; ++j){
      printf("%lld\n",output[i][j]);
    }
  }


  long long int S2 = 0;
  for(int i = 0; i < NBR_TEST; ++i){
    long long t9 = cpucycles();
    square_root(output2, input, 3);
    long long t10 = cpucycles();
    S2 += (t10 - t9);
  }
  printf("\n############################# SQUARE ROOT #############################\nCPU cycle average for square_root on %d tests: %lld\n", NBR_TEST, S2/NBR_TEST);
  printf("OUTPUT FOR SQUARE ROOT with the polynomial: a[%lu, %lu]\n",input[1],input[0]);
  printf("c(z) = %lu + sqrt(z) * %lu\n", output2[0], output2[1]);
  return 0;
}
