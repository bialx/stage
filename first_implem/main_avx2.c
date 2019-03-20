#include <stdio.h>
#include <stdlib.h>
#include "ffi_elt.h"

long long cpucycles(void) {
  unsigned long long result;
  __asm__ volatile(".byte 15;.byte 49;shlq $32,%%rdx;orq %%rdx,%%rax" : "=a" (result) ::  "%rdx");
  return result;
}

int main() {
  float tab[5] = {1,2,3,4,5};
  float tab2[5] = {1,2,3,4,5};

  __m256 a = _mm256_set_ps(0.0, 0.0, 0.0, 5.0, 4.0, 3.0, 2.0, 1.0);
  __m256 b = _mm256_set_ps(0.0, 0.0, 0.0, 5.0, 4.0, 3.0, 2.0, 1.0);

  long long t5 = cpucycles();
  add(tab, tab2);
  long long t6 = cpucycles();
  long long t7 = cpucycles();
  __m256 c = add_avx(a, b);
  long long t8 = cpucycles();
  printf("CPU Cycles: %lld CPU cycles\n", t6 - t5);
  printf("CPU Cycles: %lld CPU cycles\n", t8 - t7);
  return 0;

}
