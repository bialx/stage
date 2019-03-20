#include <stdio.h>
#include <stdlib.h>
#include "ffi_elt.h"



void add(const float* a, const float* b) {
  float d[5];
  for(int i=0; i<5; i++){
    d[i] = a[i] + b[i];
    printf("%f\n", d[i]);
  }
}


__m256 add_avx(__m256 a, __m256 b) {
  return _mm256_add_ps(a, b);
}
