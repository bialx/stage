
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

  long long t5 = cpucycles();
  o = ffi_elt_add(o, n, m);
  long long t6 = cpucycles();
  printf("CPU Cycles: %lld CPU cycles\n", t6 - t5);

/* TEST MPFQ */
  mpfq_2_89_field field;

  mp_limb_t Base = 10;
  mpfq_2_89_field_setopt(field, MPFQ_IO_TYPE, &Base);

  mpfq_2_89_elt elt1;
  mpfq_2_89_elt elt2;

  mpfq_2_89_init(field, elt1);
  mpfq_2_89_init(field, elt2);

  mpfq_2_89_sscan(field, elt1, "15");
  mpfq_2_89_sscan(field, elt2, "30");

  mpfq_2_89_add(field, elt1, elt1, elt2);

  printf("La somme vaut %lu\n", *elt1);

  // Memory management
  mpfq_2_89_clear(field, elt1);
  mpfq_2_89_clear(field, elt2);
  // printf("%zu\n", o);
}
