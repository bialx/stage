#include <inttypes.h>
#include <immintrin.h>
#ifndef FFI_ELT_H
#define FFI_ELT_H

#define W_BITS 64
// #include "mpfq_2_89.h"

#define FIELD_Q 2 /**< Parameter q of the scheme (finite field GF(q^m)) */
#define FIELD_M 89 /**< Parameter m of the scheme (finite field GF(q^m)) */
#define MPFQ_ULONGS 2 /**< Number of unsigned longs used by MPFQ to represent a field element */
#define MPFQ_BITS_PER_ULONG 64 /**< Number of bits in an unsigned long */
#define mpfq_add mpfq_2_89_add

typedef uint64_t ffi_elt;


ffi_elt ffi_elt_add(ffi_elt o, ffi_elt e1, ffi_elt e2);
void ffi_elt_sqr1(ffi_elt *o, ffi_elt *e1, int size);
ffi_elt ffi_elt_sqr2(ffi_elt *o, ffi_elt *e1, int size);



void add(const float* a, const float* b);
__m256i add_avx(__m256i a, __m256i b);
void square(uint64_t* a, int size);

#endif
