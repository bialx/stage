
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "time.h"
#include "ffi_elt.h"

/* Mesure time execution in term of cpucycle
  long long t5 = cpucycles();
  INSERT CODE
  long long t6 = cpucycles();
  printf("CPU Cycles: %lld CPU cycles\n", t6 - t5); */

long long cpucycles(void) {
  unsigned long long result;
  __asm__ volatile(".byte 15;.byte 49;shlq $32,%%rdx;orq %%rdx,%%rax" : "=a" (result) ::  "%rdx");
  return result;
}


int main() {
  ffi_elt n = 8;
  ffi_elt m = 15;
  ffi_elt o;
  ffi_elt o2[3] = {0};

  ffi_elt a[1] = {31};
  ffi_elt_sqr1(o2, a, 1);
  long long t5 = cpucycles();
  o = ffi_elt_add(o, n, m);
  long long t6 = cpucycles();
  printf("CPU Cycles: %lld CPU cycles\n", t6 - t5);



}
