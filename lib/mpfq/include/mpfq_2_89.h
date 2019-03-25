#ifndef MPFQ_2_89_H_
#define MPFQ_2_89_H_

/* MPFQ generated file -- do not edit */

#include "mpfq/mpfq.h"
#include "mpfq/mpfq_gf2n_common.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdint.h>
#include <ctype.h>
#include <emmintrin.h>
#include <stddef.h>
#include <stdio.h>
#include "assert.h"
#ifdef	MPFQ_LAST_GENERATED_TAG
#undef	MPFQ_LAST_GENERATED_TAG
#endif
#define MPFQ_LAST_GENERATED_TAG      2_89

#ifndef GMP_LIMB_BITS
#error "Please arrange so that GMP_LIMB_BITS is defined before including this file"
#endif

#if !(GMP_LIMB_BITS == 64)
#error "Constraints not met for this file: GMP_LIMB_BITS == 64"
#endif
/* Active handler: Mpfq::defaults */
/* Active handler: Mpfq::defaults::vec */
/* Active handler: Mpfq::gf2n::field */
/* Automatically generated code for GF(2^89) */
/* Definition polynomial P = X^89 + X^38 + 1 */
/* Active handler: Mpfq::gf2n::trivialities */
/* Active handler: Mpfq::gf2n::io */
/* Active handler: Mpfq::gf2n::linearops */
/* Active handler: Mpfq::gf2n::inversion */
/* Active handler: Mpfq::gf2n::reduction */
/* Active handler: Mpfq::gf2n::mul */
/* Active handler: Mpfq::defaults::poly */
/* Options used:{
   slice=4,
   table=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2x/wizard.table,
   tag=2_89,
   helper=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/helper/helper,
   n=89,
   w=64,
   output_path=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n,
   coeffs=[ 89, 38, 0, ],
   } */

typedef mpfq_2_field mpfq_2_89_field;
typedef mpfq_2_dst_field mpfq_2_89_dst_field;

typedef unsigned long mpfq_2_89_elt[2];
typedef unsigned long * mpfq_2_89_dst_elt;
typedef const unsigned long * mpfq_2_89_src_elt;

typedef unsigned long mpfq_2_89_elt_ur[3];
typedef unsigned long * mpfq_2_89_dst_elt_ur;
typedef const unsigned long * mpfq_2_89_src_elt_ur;

typedef mpfq_2_89_elt * mpfq_2_89_vec;
typedef mpfq_2_89_elt * mpfq_2_89_dst_vec;
typedef mpfq_2_89_elt * mpfq_2_89_src_vec;

typedef mpfq_2_89_elt_ur * mpfq_2_89_vec_ur;
typedef mpfq_2_89_elt_ur * mpfq_2_89_dst_vec_ur;
typedef mpfq_2_89_elt_ur * mpfq_2_89_src_vec_ur;

typedef struct {
  mpfq_2_89_vec c;
  unsigned int alloc;
  unsigned int size;
} mpfq_2_89_poly_struct;
typedef mpfq_2_89_poly_struct mpfq_2_89_poly [1];
typedef mpfq_2_89_poly_struct * mpfq_2_89_dst_poly;
typedef mpfq_2_89_poly_struct * mpfq_2_89_src_poly;

#ifdef  __cplusplus
extern "C" {
#endif

/* Functions operating on the field structure */
/* *Mpfq::gf2n::field::code_for_field_characteristic */
#define mpfq_2_89_field_characteristic(f, x)	mpz_set_ui(x,2);
/* *Mpfq::gf2n::field::code_for_field_degree */
#define mpfq_2_89_field_degree(f)	89
static inline
void mpfq_2_89_field_init(mpfq_2_89_dst_field);
/* *Mpfq::gf2n::field::code_for_field_clear */
#define mpfq_2_89_field_clear(K)	/**/
/* *Mpfq::gf2n::field::code_for_field_specify */
#define mpfq_2_89_field_specify(k, dummy, vp)	/**/
static inline
void mpfq_2_89_field_setopt(mpfq_2_89_dst_field, unsigned long, void *);

/* Element allocation functions */
/* *Mpfq::defaults::flatdata::code_for_init, Mpfq::gf2n::trivialities */
#define mpfq_2_89_init(f, px)	/**/
/* *Mpfq::defaults::flatdata::code_for_clear, Mpfq::gf2n::trivialities */
#define mpfq_2_89_clear(f, px)	/**/

/* Elementary assignment functions */
static inline
void mpfq_2_89_set(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_set_ui(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, unsigned long);
static inline
void mpfq_2_89_set_zero(mpfq_2_89_dst_field, mpfq_2_89_dst_elt);
static inline
unsigned long mpfq_2_89_get_ui(mpfq_2_89_dst_field, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_set_mpn(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mp_limb_t *, size_t);
static inline
void mpfq_2_89_set_mpz(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpz_t);
static inline
void mpfq_2_89_get_mpn(mpfq_2_89_dst_field, mp_limb_t *, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_get_mpz(mpfq_2_89_dst_field, mpz_t, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_set_uipoly(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, unsigned long);
static inline
void mpfq_2_89_set_uipoly_wide(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, const unsigned long *, unsigned int);
static inline
unsigned long mpfq_2_89_get_uipoly(mpfq_2_89_dst_field, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_get_uipoly_wide(mpfq_2_89_dst_field, unsigned long *, mpfq_2_89_src_elt);

/* Assignment of random values */
static inline
void mpfq_2_89_random(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, gmp_randstate_t);
static inline
void mpfq_2_89_random2(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, gmp_randstate_t);

/* Arithmetic operations on elements */
static inline
void mpfq_2_89_add(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt, mpfq_2_89_src_elt);
/* *Mpfq::gf2n::trivialities::code_for_sub */
#define mpfq_2_89_sub(K, r, s1, s2)	mpfq_2_89_add(K,r,s1,s2)
/* *Mpfq::gf2n::trivialities::code_for_neg */
#define mpfq_2_89_neg(K, r, s)	mpfq_2_89_set(K,r,s)
static inline
void mpfq_2_89_mul(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_sqr(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt);
/* *Mpfq::gf2n::trivialities::code_for_is_sqr */
#define mpfq_2_89_is_sqr(f, p)	1
static inline
int mpfq_2_89_sqrt(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_pow(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt, unsigned long *, size_t);
/* *Mpfq::gf2n::trivialities::code_for_frobenius */
#define mpfq_2_89_frobenius(K, r, s)	mpfq_2_89_sqr(K,r,s)
static inline
void mpfq_2_89_add_ui(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt, unsigned long);
/* *Mpfq::gf2n::trivialities::code_for_sub_ui */
#define mpfq_2_89_sub_ui(K, r, s1, s2)	mpfq_2_89_add_ui(K,r,s1,s2)
static inline
void mpfq_2_89_mul_ui(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt, unsigned long);
static inline
void mpfq_2_89_add_uipoly(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt, unsigned long);
/* *Mpfq::gf2n::trivialities::code_for_sub_uipoly */
#define mpfq_2_89_sub_uipoly(K, r, s1, s2)	mpfq_2_89_add_uipoly(K,r,s1,s2)
static inline
void mpfq_2_89_mul_uipoly(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt, unsigned long);
static inline
void mpfq_2_89_longaddshift_left(unsigned long *, const unsigned long *, int, int);
static inline
void mpfq_2_89_longshift_left(unsigned long *, const unsigned long *, int, int);
static inline
int mpfq_2_89_inv(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_as_solve(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_elt);
static inline
unsigned long mpfq_2_89_trace(mpfq_2_89_dst_field, mpfq_2_89_src_elt);

/* Operations involving unreduced elements */
/* *Mpfq::defaults::flatdata::code_for_elt_ur_init, Mpfq::gf2n::trivialities */
#define mpfq_2_89_elt_ur_init(f, px)	/**/
/* *Mpfq::defaults::flatdata::code_for_elt_ur_clear, Mpfq::gf2n::trivialities */
#define mpfq_2_89_elt_ur_clear(f, px)	/**/
static inline
void mpfq_2_89_elt_ur_set(mpfq_2_89_dst_field, mpfq_2_89_dst_elt_ur, mpfq_2_89_src_elt_ur);
static inline
void mpfq_2_89_elt_ur_set_elt(mpfq_2_89_dst_field, mpfq_2_89_dst_elt_ur, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_elt_ur_set_zero(mpfq_2_89_dst_field, mpfq_2_89_dst_elt_ur);
static inline
void mpfq_2_89_elt_ur_set_ui(mpfq_2_89_dst_field, mpfq_2_89_dst_elt_ur, unsigned long);
static inline
void mpfq_2_89_elt_ur_add(mpfq_2_89_dst_field, mpfq_2_89_dst_elt_ur, mpfq_2_89_src_elt_ur, mpfq_2_89_src_elt_ur);
/* *Mpfq::gf2n::trivialities::code_for_elt_ur_neg */
#define mpfq_2_89_elt_ur_neg(K, r, s)	mpfq_2_89_elt_ur_set(K,r,s)
/* *Mpfq::gf2n::trivialities::code_for_elt_ur_sub */
#define mpfq_2_89_elt_ur_sub(K, r, s1, s2)	mpfq_2_89_elt_ur_add(K,r,s1,s2)
static inline
void mpfq_2_89_mul_ur(mpfq_2_89_dst_field, mpfq_2_89_dst_elt_ur, mpfq_2_89_src_elt, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_sqr_ur(mpfq_2_89_dst_field, mpfq_2_89_dst_elt_ur, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_reduce(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_dst_elt_ur);

/* Comparison functions */
static inline
int mpfq_2_89_cmp(mpfq_2_89_dst_field, mpfq_2_89_src_elt, mpfq_2_89_src_elt);
static inline
int mpfq_2_89_cmp_ui(mpfq_2_89_dst_field, mpfq_2_89_src_elt, unsigned long);
static inline
int mpfq_2_89_is_zero(mpfq_2_89_dst_field, mpfq_2_89_src_elt);

/* Input/output functions */
void mpfq_2_89_asprint(mpfq_2_89_dst_field, char * *, mpfq_2_89_src_elt);
void mpfq_2_89_fprint(mpfq_2_89_dst_field, FILE *, mpfq_2_89_src_elt);
/* *Mpfq::defaults::code_for_print */
#define mpfq_2_89_print(k, x)	mpfq_2_89_fprint(k,stdout,x)
int mpfq_2_89_sscan(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, const char *);
int mpfq_2_89_fscan(mpfq_2_89_dst_field, FILE *, mpfq_2_89_dst_elt);
/* *Mpfq::gf2n::io::code_for_scan */
#define mpfq_2_89_scan(k, x)	mpfq_2_89_fscan(k,stdout,x)

/* Vector functions */
void mpfq_2_89_vec_init(mpfq_2_89_dst_field, mpfq_2_89_vec *, unsigned int);
void mpfq_2_89_vec_reinit(mpfq_2_89_dst_field, mpfq_2_89_vec *, unsigned int, unsigned int);
void mpfq_2_89_vec_clear(mpfq_2_89_dst_field, mpfq_2_89_vec *, unsigned int);
static inline
void mpfq_2_89_vec_set(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, mpfq_2_89_src_vec, unsigned int);
static inline
void mpfq_2_89_vec_set_zero(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, unsigned int);
static inline
void mpfq_2_89_vec_setcoef(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, mpfq_2_89_src_elt, unsigned int);
static inline
void mpfq_2_89_vec_setcoef_ui(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, unsigned long, unsigned int);
static inline
void mpfq_2_89_vec_getcoef(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_vec, unsigned int);
static inline
void mpfq_2_89_vec_add(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, mpfq_2_89_src_vec, mpfq_2_89_src_vec, unsigned int);
static inline
void mpfq_2_89_vec_neg(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, mpfq_2_89_src_vec, unsigned int);
static inline
void mpfq_2_89_vec_rev(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, mpfq_2_89_src_vec, unsigned int);
static inline
void mpfq_2_89_vec_sub(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, mpfq_2_89_src_vec, mpfq_2_89_src_vec, unsigned int);
static inline
void mpfq_2_89_vec_scal_mul(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, mpfq_2_89_src_vec, mpfq_2_89_src_elt, unsigned int);
static inline
void mpfq_2_89_vec_conv(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, mpfq_2_89_src_vec, unsigned int, mpfq_2_89_src_vec, unsigned int);
static inline
void mpfq_2_89_vec_random(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, unsigned int, gmp_randstate_t);
static inline
void mpfq_2_89_vec_random2(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, unsigned int, gmp_randstate_t);
static inline
int mpfq_2_89_vec_cmp(mpfq_2_89_dst_field, mpfq_2_89_src_vec, mpfq_2_89_src_vec, unsigned int);
static inline
int mpfq_2_89_vec_is_zero(mpfq_2_89_dst_field, mpfq_2_89_src_vec, unsigned int);
void mpfq_2_89_vec_asprint(mpfq_2_89_dst_field, char * *, mpfq_2_89_src_vec, unsigned int);
void mpfq_2_89_vec_fprint(mpfq_2_89_dst_field, FILE *, mpfq_2_89_src_vec, unsigned int);
void mpfq_2_89_vec_print(mpfq_2_89_dst_field, mpfq_2_89_src_vec, unsigned int);
int mpfq_2_89_vec_sscan(mpfq_2_89_dst_field, mpfq_2_89_vec *, unsigned int *, const char *);
int mpfq_2_89_vec_fscan(mpfq_2_89_dst_field, FILE *, mpfq_2_89_vec *, unsigned int *);
/* *Mpfq::defaults::vec::io::code_for_vec_scan, Mpfq::defaults::vec, Mpfq::defaults */
#define mpfq_2_89_vec_scan(K, w, n)	mpfq_2_89_vec_fscan(K,stdout,w,n)
void mpfq_2_89_vec_ur_init(mpfq_2_89_dst_field, mpfq_2_89_vec_ur *, unsigned int);
static inline
void mpfq_2_89_vec_ur_set_zero(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, unsigned int);
static inline
void mpfq_2_89_vec_ur_set_vec(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_vec, unsigned int);
void mpfq_2_89_vec_ur_reinit(mpfq_2_89_dst_field, mpfq_2_89_vec_ur *, unsigned int, unsigned int);
void mpfq_2_89_vec_ur_clear(mpfq_2_89_dst_field, mpfq_2_89_vec_ur *, unsigned int);
static inline
void mpfq_2_89_vec_ur_set(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_vec_ur, unsigned int);
static inline
void mpfq_2_89_vec_ur_setcoef(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_elt_ur, unsigned int);
static inline
void mpfq_2_89_vec_ur_getcoef(mpfq_2_89_dst_field, mpfq_2_89_dst_elt_ur, mpfq_2_89_src_vec_ur, unsigned int);
static inline
void mpfq_2_89_vec_ur_add(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_vec_ur, mpfq_2_89_src_vec_ur, unsigned int);
static inline
void mpfq_2_89_vec_ur_sub(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_vec_ur, mpfq_2_89_src_vec_ur, unsigned int);
static inline
void mpfq_2_89_vec_ur_neg(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_vec_ur, unsigned int);
static inline
void mpfq_2_89_vec_ur_rev(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_vec_ur, unsigned int);
static inline
void mpfq_2_89_vec_scal_mul_ur(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_vec, mpfq_2_89_src_elt, unsigned int);
static inline
void mpfq_2_89_vec_conv_ur_n(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_vec, mpfq_2_89_src_vec, unsigned int);
static inline
void mpfq_2_89_vec_conv_ur(mpfq_2_89_dst_field, mpfq_2_89_dst_vec_ur, mpfq_2_89_src_vec, unsigned int, mpfq_2_89_src_vec, unsigned int);
static inline
void mpfq_2_89_vec_reduce(mpfq_2_89_dst_field, mpfq_2_89_dst_vec, mpfq_2_89_dst_vec_ur, unsigned int);
/* *Mpfq::defaults::flatdata::code_for_vec_elt_stride, Mpfq::gf2n::trivialities */
#define mpfq_2_89_vec_elt_stride(K, n)	((n)*sizeof(mpfq_2_89_elt))

/* Polynomial functions */
static inline
void mpfq_2_89_poly_init(mpfq_2_89_dst_field, mpfq_2_89_poly, unsigned int);
static inline
void mpfq_2_89_poly_clear(mpfq_2_89_dst_field, mpfq_2_89_poly);
static inline
void mpfq_2_89_poly_set(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly);
void mpfq_2_89_poly_setmonic(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_setcoef(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_elt, unsigned int);
static inline
void mpfq_2_89_poly_setcoef_ui(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, unsigned long, unsigned int);
static inline
void mpfq_2_89_poly_getcoef(mpfq_2_89_dst_field, mpfq_2_89_dst_elt, mpfq_2_89_src_poly, unsigned int);
static inline
int mpfq_2_89_poly_deg(mpfq_2_89_dst_field, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_add(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_sub(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_add_ui(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, unsigned long);
static inline
void mpfq_2_89_poly_sub_ui(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, unsigned long);
static inline
void mpfq_2_89_poly_neg(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_scal_mul(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, mpfq_2_89_src_elt);
static inline
void mpfq_2_89_poly_mul(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, mpfq_2_89_src_poly);
void mpfq_2_89_poly_divmod(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, mpfq_2_89_src_poly);
void mpfq_2_89_poly_precomp_mod(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly);
void mpfq_2_89_poly_mod_pre(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, mpfq_2_89_src_poly, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_gcd(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_xgcd(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_dst_poly, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_random(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, unsigned int, gmp_randstate_t);
static inline
void mpfq_2_89_poly_random2(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, unsigned int, gmp_randstate_t);
static inline
int mpfq_2_89_poly_cmp(mpfq_2_89_dst_field, mpfq_2_89_src_poly, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_asprint(mpfq_2_89_dst_field, char * *, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_fprint(mpfq_2_89_dst_field, FILE *, mpfq_2_89_src_poly);
static inline
void mpfq_2_89_poly_print(mpfq_2_89_dst_field, mpfq_2_89_src_poly);
static inline
int mpfq_2_89_poly_sscan(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, const char *);
static inline
int mpfq_2_89_poly_fscan(mpfq_2_89_dst_field, FILE *, mpfq_2_89_dst_poly);
static inline
int mpfq_2_89_poly_scan(mpfq_2_89_dst_field, mpfq_2_89_dst_poly);
#ifdef  __cplusplus
}
#endif

/* Implementations for inlines */
/* *Mpfq::gf2n::field::code_for_field_init */
static inline
void mpfq_2_89_field_init(mpfq_2_89_dst_field f)
{
    f->io_type=16;
}

/* *Mpfq::gf2n::field::code_for_field_setopt */
static inline
void mpfq_2_89_field_setopt(mpfq_2_89_dst_field f, unsigned long x MAYBE_UNUSED, void * y)
{
    assert(x == MPFQ_IO_TYPE);
    f->io_type=((unsigned long*)y)[0];
}

/* *Mpfq::defaults::flatdata::code_for_set, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_set(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s)
{
    if (r != s) memcpy(r,s,sizeof(mpfq_2_89_elt));
}

/* *Mpfq::gf2n::trivialities::code_for_set_ui */
static inline
void mpfq_2_89_set_ui(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, unsigned long x)
{
    r[0] = x & 1UL;
    memset(r + 1, 0, sizeof(mpfq_2_89_elt) - sizeof(unsigned long));
}

/* *Mpfq::defaults::flatdata::code_for_set_zero, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_set_zero(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r)
{
    mpfq_2_89_vec_set_zero(K,(mpfq_2_89_dst_vec)r,1);
}

/* *Mpfq::gf2n::trivialities::code_for_get_ui */
static inline
unsigned long mpfq_2_89_get_ui(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_elt r)
{
    return r[0] & 1UL;
}

/* *Mpfq::gf2n::trivialities::code_for_set_mpn */
static inline
void mpfq_2_89_set_mpn(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mp_limb_t * x, size_t n)
{
    r[0] = MPFQ_LIKELY(n > 0) ? (x[0] & 1UL) : 0;
    memset(r + 1, 0, sizeof(mpfq_2_89_elt) - sizeof(unsigned long));
}

/* *Mpfq::gf2n::trivialities::code_for_set_mpz */
static inline
void mpfq_2_89_set_mpz(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpz_t z)
{
    r[0] = mpz_getlimbn(z,0) & 1UL;
    memset(r + 1, 0, sizeof(mpfq_2_89_elt) - sizeof(unsigned long));
}

/* *Mpfq::gf2n::trivialities::code_for_get_mpn */
static inline
void mpfq_2_89_get_mpn(mpfq_2_89_dst_field K MAYBE_UNUSED, mp_limb_t * p, mpfq_2_89_src_elt r)
{
    p[0] = r[0] & 1UL;
    memset(p + 1, 0, (2 - 1) * sizeof(mp_limb_t));
}

/* *Mpfq::gf2n::trivialities::code_for_get_mpz */
static inline
void mpfq_2_89_get_mpz(mpfq_2_89_dst_field K MAYBE_UNUSED, mpz_t z, mpfq_2_89_src_elt r)
{
    mpz_set_ui(z, r[0] & 1UL);
}

/* *Mpfq::gf2n::trivialities::code_for_set_uipoly */
static inline
void mpfq_2_89_set_uipoly(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, unsigned long x)
{
    r[0] = x;
    memset(r + 1, 0, sizeof(mpfq_2_89_elt) - sizeof(unsigned long));
}

/* *Mpfq::gf2n::trivialities::code_for_set_uipoly_wide */
static inline
void mpfq_2_89_set_uipoly_wide(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, const unsigned long * x, unsigned int n)
{
    unsigned int i;
    for (i = 0 ; i < n && i < 2 ; i++)
        r[i] = x[i];
    r[1] &= 0x1ffffffUL;
}

/* *Mpfq::gf2n::trivialities::code_for_get_uipoly */
static inline
unsigned long mpfq_2_89_get_uipoly(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_elt r)
{
    return r[0];
}

/* *Mpfq::gf2n::trivialities::code_for_get_uipoly_wide */
static inline
void mpfq_2_89_get_uipoly_wide(mpfq_2_89_dst_field K MAYBE_UNUSED, unsigned long * r, mpfq_2_89_src_elt x)
{
    unsigned int i;
    for(i = 0 ; i < 2 ; i++) r[i] = x[i];
}

/* *Mpfq::gf2n::trivialities::code_for_random */
static inline
void mpfq_2_89_random(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, gmp_randstate_t state)
{
    r[0] = gmp_urandomb_ui(state, GMP_LIMB_BITS);
    r[1] = gmp_urandomb_ui(state, GMP_LIMB_BITS);
    r[1] &= 0x1ffffffUL;
}

/* *Mpfq::gf2n::trivialities::code_for_random2 */
static inline
void mpfq_2_89_random2(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, gmp_randstate_t state)
{
    int i;
    mpz_t tmp;
    mpz_init(tmp);
    mpz_rrandomb(tmp, state, GMP_LIMB_BITS*2);
    for(i=0;i<2;++i)
     r[i]=tmp->_mp_d[i];
    mpz_clear(tmp);
    r[1] &= 0x1ffffffUL;
}

/* *Mpfq::gf2n::trivialities::code_for_add */
static inline
void mpfq_2_89_add(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s1, mpfq_2_89_src_elt s2)
{
    int i;
    for(i = 0 ; i < 2 ; i++)
        r[i] = s1[i] ^ s2[i];
}

/* *Mpfq::gf2n::trivialities::code_for_mul */
static inline
void mpfq_2_89_mul(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s1, mpfq_2_89_src_elt s2)
{
    mpfq_2_89_elt_ur t;
    mpfq_2_89_mul_ur(K, t, s1, s2);
    mpfq_2_89_reduce(K, r, t);
}

/* *Mpfq::gf2n::trivialities::code_for_sqr */
static inline
void mpfq_2_89_sqr(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s)
{
    mpfq_2_89_elt_ur t;
    mpfq_2_89_sqr_ur(K, t, s);
    mpfq_2_89_reduce(K, r, t);
}

/* *Mpfq::gf2n::linearops::code_for_sqrt */
static inline
int mpfq_2_89_sqrt(mpfq_2_89_dst_field K, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s)
{
    static const mp_limb_t shuffle_table[256] = {
        0, 1, 16, 17, 2, 3, 18, 19,
        32, 33, 48, 49, 34, 35, 50, 51,
        4, 5, 20, 21, 6, 7, 22, 23,
        36, 37, 52, 53, 38, 39, 54, 55,
        64, 65, 80, 81, 66, 67, 82, 83,
        96, 97, 112, 113, 98, 99, 114, 115,
        68, 69, 84, 85, 70, 71, 86, 87,
        100, 101, 116, 117, 102, 103, 118, 119,
        8, 9, 24, 25, 10, 11, 26, 27,
        40, 41, 56, 57, 42, 43, 58, 59,
        12, 13, 28, 29, 14, 15, 30, 31,
        44, 45, 60, 61, 46, 47, 62, 63,
        72, 73, 88, 89, 74, 75, 90, 91,
        104, 105, 120, 121, 106, 107, 122, 123,
        76, 77, 92, 93, 78, 79, 94, 95,
        108, 109, 124, 125, 110, 111, 126, 127,
        128, 129, 144, 145, 130, 131, 146, 147,
        160, 161, 176, 177, 162, 163, 178, 179,
        132, 133, 148, 149, 134, 135, 150, 151,
        164, 165, 180, 181, 166, 167, 182, 183,
        192, 193, 208, 209, 194, 195, 210, 211,
        224, 225, 240, 241, 226, 227, 242, 243,
        196, 197, 212, 213, 198, 199, 214, 215,
        228, 229, 244, 245, 230, 231, 246, 247,
        136, 137, 152, 153, 138, 139, 154, 155,
        168, 169, 184, 185, 170, 171, 186, 187,
        140, 141, 156, 157, 142, 143, 158, 159,
        172, 173, 188, 189, 174, 175, 190, 191,
        200, 201, 216, 217, 202, 203, 218, 219,
        232, 233, 248, 249, 234, 235, 250, 251,
        204, 205, 220, 221, 206, 207, 222, 223,
        236, 237, 252, 253, 238, 239, 254, 255,
    };

    mpfq_2_89_elt sqrt_t ={ 0x200100002000UL, 0x80001UL, }
    ;

    mpfq_2_89_elt odd, even;
    mpfq_2_89_elt_ur odd_t;
    mp_limb_t t;
#define	EVEN_MASK	(((mp_limb_t)-1)/3UL)
#define	ODD_MASK	((EVEN_MASK)<<1)
    unsigned int i;
    for(i = 0 ; i < 2 ; i++) {
        even[i] = s[i] & EVEN_MASK;
    }
    for(i = 0 ; i < 1 ; i++) {
        t = even[2*i];   t |= t >> 7;
              even[i]  = shuffle_table[t & 255];
        t >>= 16; even[i] |= shuffle_table[t & 255] << 8;
        t >>= 16; even[i] |= shuffle_table[t & 255] << 16;
        t >>= 16; even[i] |= shuffle_table[t & 255] << 24;
        t = even[2*i+1]; t |= t >> 7;
              even[i] |= shuffle_table[t & 255] << 32;
        t >>= 16; even[i] |= shuffle_table[t & 255] << 40;
        t >>= 16; even[i] |= shuffle_table[t & 255] << 48;
        t >>= 16; even[i] |= shuffle_table[t & 255] << 56;
    }
    memset(even + 1, 0, 1 * sizeof(mp_limb_t));
    for(i = 0 ; i < 2 ; i++) {
        odd[i] = (s[i] & ODD_MASK) >> 1;
    }
    for(i = 0 ; i < 1 ; i++) {
        t = odd[2*i];   t |= t >> 7;
              odd[i]  = shuffle_table[t & 255];
        t >>= 16; odd[i] |= shuffle_table[t & 255] << 8;
        t >>= 16; odd[i] |= shuffle_table[t & 255] << 16;
        t >>= 16; odd[i] |= shuffle_table[t & 255] << 24;
        t = odd[2*i+1]; t |= t >> 7;
              odd[i] |= shuffle_table[t & 255] << 32;
        t >>= 16; odd[i] |= shuffle_table[t & 255] << 40;
        t >>= 16; odd[i] |= shuffle_table[t & 255] << 48;
        t >>= 16; odd[i] |= shuffle_table[t & 255] << 56;
    }
    memset(odd + 1, 0, 1 * sizeof(mp_limb_t));
    mpfq_2_89_mul_ur(K, odd_t, odd, sqrt_t);
    for(i = 0 ; i < (2+1)/2 ; i++) {
        odd_t[i] ^= even[i];
    }
    /* mpfq_2_89_print(K, stdout, odd_t); */
    mpfq_2_89_reduce(K, r, odd_t);
    /* mpfq_2_89_print(K, stdout, r); */
    /* fprintf(stdout, "\n"); */
    /* fflush(stdout); */
    return 1;
}

/* *Mpfq::defaults::pow::code_for_pow, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_pow(mpfq_2_89_dst_field k, mpfq_2_89_dst_elt res, mpfq_2_89_src_elt r, unsigned long * x, size_t n)
{
    mpfq_2_89_elt u, a;
    long i, j, lead;     /* it is a signed type */
    unsigned long mask;

    assert (n>0);

    /* get the correct (i,j) position of the most significant bit in x */
    for(i = n-1; i>=0 && x[i]==0; i--)
        ;
    if (i < 0) {
        mpfq_2_89_set_ui(k, res, 0);
        return;
    }
    j = 64 - 1;
    mask = (1UL<<j);
    for( ; (x[i]&mask)==0 ;j--, mask>>=1)
        ;
    lead = i*64+j;      /* Ensured. */

    mpfq_2_89_init(k, &u);
    mpfq_2_89_init(k, &a);
    mpfq_2_89_set(k, a, r);
    for( ; lead > 0; lead--) {
        if (j-- == 0) {
            i--;
            j = 64-1;
            mask = (1UL<<j);
        } else {
            mask >>= 1;
        }
        if (x[i]&mask) {
            mpfq_2_89_sqr(k, u, a);
            mpfq_2_89_mul(k, a, u, r);
        } else {
            mpfq_2_89_sqr(k, a,a);
        }
    }
    mpfq_2_89_set(k, res, a);
    mpfq_2_89_clear(k, &u);
    mpfq_2_89_clear(k, &a);
}

/* *Mpfq::gf2n::trivialities::code_for_add_ui */
static inline
void mpfq_2_89_add_ui(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s, unsigned long x)
{
    mpfq_2_89_set(K, r, s);
    r[0] ^= x & 1UL;
}

/* *Mpfq::gf2n::trivialities::code_for_mul_ui */
static inline
void mpfq_2_89_mul_ui(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s, unsigned long x)
{
    if (x & 1UL) {
        mpfq_2_89_set(K, r, s);
    } else {
        memset(r, 0, sizeof(mpfq_2_89_elt));
    }
}

/* *Mpfq::gf2n::trivialities::code_for_add_uipoly */
static inline
void mpfq_2_89_add_uipoly(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s, unsigned long x)
{
    mpfq_2_89_set(K, r, s);
    r[0] ^= x;
}

/* *Mpfq::gf2n::trivialities::code_for_mul_uipoly */
static inline
void mpfq_2_89_mul_uipoly(mpfq_2_89_dst_field k, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s, unsigned long x)
{
    mpfq_2_89_elt xx;
    mpfq_2_89_init(k, &xx);
    mpfq_2_89_set_uipoly(k, xx, x);
    mpfq_2_89_mul(k, r, s, xx);
    mpfq_2_89_clear(k, &xx);
}

/* *Mpfq::gf2n::inversion::code_for_inv */
static inline
void mpfq_2_89_longaddshift_left(unsigned long * dst, const unsigned long * src, int n, int s)
{
    int m = s / 64;
    int i;
    s %= 64;
    if (s>0) {
        for(i = n-m-1 ; i > 0 ; i--) {
            dst[m+i] ^= src[i] << s ^ src[i-1] >> (64-s);
        }
        dst[m] ^= src[0] << s;
    } else {
        for(i = n-m-1 ; i > 0 ; i--) {
            dst[m+i] ^= src[i];
        }
        dst[m] ^= src[0];
    }
}

/* *Mpfq::gf2n::inversion::code_for_inv */
static inline
void mpfq_2_89_longshift_left(unsigned long * dst, const unsigned long * src, int n, int s)
{
    int m = s / 64;
    int i;
    s %= 64;
    if (s > 0) {
        for(i = n-m-1 ; i > 0 ; i--) {
            dst[m+i] = src[i] << s ^ src[i-1] >> (64-s);
        }
        dst[m] = src[0] << s;
    } else {
        for(i = n-m-1 ; i > 0 ; i--) {
            dst[m+i] = src[i];
        }
        dst[m] = src[0];
    }
    for(i = m-1 ; i>= 0 ; i--) {
        dst[i] = 0UL;
    }

}

/* *Mpfq::gf2n::inversion::code_for_inv */
static inline
int mpfq_2_89_inv(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s)
{
    mp_limb_t a[2] = { 0x4000000000UL, 0x8000000000001000UL, };
    mp_limb_t b[2];
    mp_limb_t u[2] = { 0, };
    mp_limb_t v[2] = { 1, 0, };
    mp_limb_t x;
    mp_size_t ia, ib;
    int i,d;

    if (mpfq_2_89_cmp_ui(K, s, 0UL) == 0)
        return 0;
    {
        unsigned long z;
        z = s[0] << 38;
        b[0] = z;
        z = s[0] >> 26 ^ s[1] << 38;
        b[1] = z;
    }
    ib = clzlx(b, 2);
    ia = 0;

    mpfq_2_89_longshift_left(b,b,2,ib);

    for(d = ib - ia ; ; ) {
            if (d == 0) {
                    for(i = 0 ; i < 2 ; i++) v[i] ^= u[i];
            b[0] ^= a[0]; x = b[0];
            b[1] ^= a[1]; x |= b[1];
                    if (!x) { memcpy(r,u,2 * sizeof(mp_limb_t)); return 1; }
                    mp_limb_t t = clzlx(b,2);
                    ib += t;
                    d += t;
                    mpfq_2_89_longshift_left(b,b,2,t);
            }
            for(;d > 0;) {
                    mpfq_2_89_longaddshift_left(u,v,2,d);
            a[0] ^= b[0]; x = a[0];
            a[1] ^= b[1]; x |= a[1];
                    if (!x) { memcpy(r,v,2 * sizeof(mp_limb_t)); return 1; }
                    mp_limb_t t = clzlx(a,2);
                    ia += t;
                    d -= t;
                    mpfq_2_89_longshift_left(a,a,2,t);
            }
            if (d == 0) {
                    for(i = 0 ; i < 2 ; i++) u[i] ^= v[i];
            a[0] ^= b[0]; x = a[0];
            a[1] ^= b[1]; x |= a[1];
                    if (!x) { memcpy(r,v,2 * sizeof(mp_limb_t)); return 1; }
                    mp_limb_t t = clzlx(a,2);
                    ia += t;
                    d -= t;
                    mpfq_2_89_longshift_left(a,a,2,t);
            }
            for(;d < 0;) {
                    mpfq_2_89_longaddshift_left(v,u,2,-d);
            b[0] ^= a[0]; x = b[0];
            b[1] ^= a[1]; x |= b[1];
                    if (!x) { memcpy(r,u,2 * sizeof(mp_limb_t)); return 1; }
                    mp_limb_t t = clzlx(b,2);
                    ib += t;
                    d += t;
                    mpfq_2_89_longshift_left(b,b,2,t);
            }
    }
}

/* *Mpfq::gf2n::linearops::code_for_as_solve */
static inline
void mpfq_2_89_as_solve(mpfq_2_89_dst_field K, mpfq_2_89_dst_elt r, mpfq_2_89_src_elt s)
{
    static const mpfq_2_89_elt t[89] = {
        { 0xd59c21ed99a1fc12UL, 0xab7de8UL, },
        { 0x2fd2e0462eb8866cUL, 0xa891afUL, },
        { 0x2fd2e0462eb8866eUL, 0xa891afUL, },
        { 0x151a6395d985e602UL, 0x8d68b8UL, },
        { 0x2fd2e0462eb8866aUL, 0xa891afUL, },
        { 0xef140abe2ed59c74UL, 0xecc6a7UL, },
        { 0x151a6395d985e60aUL, 0x8d68b8UL, },
        { 0x2d9be0862db0b77aUL, 0xa0c1a6UL, },
        { 0x2fd2e0462eb8867aUL, 0xa891afUL, },
        { 0xec100512f2d1390UL, 0x83108UL, },
        { 0xef140abe2ed59c54UL, 0xecc6a7UL, },
        { 0x4109ea08508179feUL, 0x6e0811UL, },
        { 0x151a6395d985e64aUL, 0x8d68b8UL, },
        { 0x8000000000000UL, 0x0UL, },
        { 0x2d9be0862db0b7faUL, 0xa0c1a6UL, },
        { 0xc697cbb90b640facUL, 0x456789UL, },
        { 0x2fd2e0462eb8877aUL, 0xa891afUL, },
        { 0xc0fc6efc146db81eUL, 0xf4d62cUL, },
        { 0xec100512f2d1190UL, 0x83108UL, },
        { 0x6e197adf2a18b58aUL, 0x1ec7e84UL, },
        { 0xef140abe2ed59854UL, 0xecc6a7UL, },
        { 0x274045421ab80048UL, 0x111002UL, },
        { 0x4109ea08508171feUL, 0x6e0811UL, },
        { 0x235180c21718d5b4UL, 0x28509dUL, },
        { 0x151a6395d985f64aUL, 0x8d68b8UL, },
        { 0x23d790c615fcdfa4UL, 0x1a8558dUL, },
        { 0x8000000002000UL, 0x0UL, },
        { 0x175a63d5d38de64aUL, 0x8d78b8UL, },
        { 0x2d9be0862db0f7faUL, 0xa0c1a6UL, },
        { 0x64920412f093196UL, 0x3001UL, },
        { 0xc697cbb90b648facUL, 0x456789UL, },
        { 0xd695cbad4b608dacUL, 0xc567b9UL, },
        { 0x2fd2e0462eb9877aUL, 0xa891afUL, },
        { 0x2983410525b113d8UL, 0x89a13aUL, },
        { 0xc0fc6efc146fb81eUL, 0xf4d62cUL, },
        { 0xbb855b3ab3b14998UL, 0x147032cUL, },
        { 0xec100512f291190UL, 0x83108UL, },
        { 0x2d1080a33891c434UL, 0x206495UL, },
        { 0x6e197adf2a10b58aUL, 0x1ec7e84UL, },
        { 0x17524355db8dc75cUL, 0x8538b1UL, },
        { 0xef140abe2ec59854UL, 0xecc6a7UL, },
        { 0x364ba357ce1d33b6UL, 0xa53825UL, },
        { 0x274045421a980048UL, 0x111002UL, },
        { 0x830df021468529beUL, 0x122aa33UL, },
        { 0x4109ea0850c171feUL, 0x6e0811UL, },
        { 0x38808313f5354130UL, 0x2da91eUL, },
        { 0x235180c21798d5b4UL, 0x28509dUL, },
        { 0x6c197a9f6850b5caUL, 0x1ce6c94UL, },
        { 0x151a6395d885f64aUL, 0x8d68b8UL, },
        { 0x62da7ace477da65aUL, 0x1c65d9cUL, },
        { 0x23d790c617fcdfa4UL, 0x1a8558dUL, },
        { 0x0UL, 0x0UL, },
        { 0x8000004002000UL, 0x0UL, },
        { 0xc68fcbb90f642facUL, 0x456789UL, },
        { 0x175a63d5db8de64aUL, 0x8d78b8UL, },
        { 0x653a5451b0997b2UL, 0xb1b1a5UL, },
        { 0x2d9be0863db0f7faUL, 0xa0c1a6UL, },
        { 0x7903190af19553c0UL, 0x161063cUL, },
        { 0x64920410f093196UL, 0x3001UL, },
        { 0x2193e00701b197faUL, 0xa0a1a7UL, },
        { 0xc697cbb94b648facUL, 0x456789UL, },
        { 0xfca60442aa8224eUL, 0x88913bUL, },
        { 0xd695cbadcb608dacUL, 0xc567b9UL, },
        { 0x58d489cce4698c64UL, 0xc953b1UL, },
        { 0x2fd2e0472eb9877aUL, 0xa891afUL, },
        { 0x15134394dc84d7dcUL, 0x8d48b9UL, },
        { 0x2983410725b113d8UL, 0x89a13aUL, },
        { 0x2fdac0462eb8a66cUL, 0xa091a6UL, },
        { 0xc0fc6ef8146fb81eUL, 0xf4d62cUL, },
        { 0x2001400040200UL, 0x800030UL, },
        { 0xbb855b32b3b14998UL, 0x147032cUL, },
        { 0x64921410f193196UL, 0x13001UL, },
        { 0xec100412f291190UL, 0x83108UL, },
        { 0x2d10909778d1c434UL, 0x1826495UL, },
        { 0x2d1080833891c434UL, 0x206495UL, },
        { 0xf5c4096fdcf84850UL, 0xe93724UL, },
        { 0x6e197a9f2a10b58aUL, 0x1ec7e84UL, },
        { 0x3880a312f5344026UL, 0x2da91fUL, },
        { 0x175243d5db8dc75cUL, 0x8538b1UL, },
        { 0x2358e0c31299e46aUL, 0x28709eUL, },
        { 0xef140bbe2ec59854UL, 0xecc6a7UL, },
        { 0xaa8eb12663343a66UL, 0x1ab0b0dUL, },
        { 0x364ba157ce1d33b6UL, 0xa53825UL, },
        { 0x175a4355db8de75cUL, 0x8d38b0UL, },
        { 0x274041421a980048UL, 0x111002UL, },
        { 0xace514677c3f0dd4UL, 0x13abaa8UL, },
        { 0x830df821468529beUL, 0x122aa33UL, },
        { 0x62d87ada4779a45aUL, 0x1465d8cUL, },
        { 0x4109fa0850c171feUL, 0x6e0811UL, },
    };
    const mpfq_2_89_elt * ptr = t;
    unsigned int i,j;
    memset(r, 0, sizeof(mpfq_2_89_elt));
    for(i = 0 ; i < 2 ; i++) {
        mp_limb_t a = s[i];
        for(j = 0 ; j < 64 && ptr != &t[89]; j++, ptr++) {
            if (a & 1UL) {
                mpfq_2_89_add(K, r, r, *ptr);
            }
            a >>= 1;
        }
    }
}

/* *Mpfq::gf2n::linearops::code_for_trace */
static inline
unsigned long mpfq_2_89_trace(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_elt s)
{
    return ((s[0]>>51) ^ s[0]) & 1;
}

/* *Mpfq::defaults::flatdata::code_for_elt_ur_set, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_elt_ur_set(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt_ur r, mpfq_2_89_src_elt_ur s)
{
    if (r != s) memcpy(r,s,sizeof(mpfq_2_89_elt_ur));
}

/* *Mpfq::defaults::flatdata::code_for_elt_ur_set_elt, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_elt_ur_set_elt(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt_ur r, mpfq_2_89_src_elt s)
{
    memset(r, 0, sizeof(mpfq_2_89_elt_ur)); memcpy(r,s,sizeof(mpfq_2_89_elt));
}

/* *Mpfq::defaults::flatdata::code_for_elt_ur_set_zero, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_elt_ur_set_zero(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt_ur r)
{
    memset(r, 0, sizeof(mpfq_2_89_elt_ur));
}

/* *Mpfq::gf2n::trivialities::code_for_elt_ur_set_ui */
static inline
void mpfq_2_89_elt_ur_set_ui(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt_ur r, unsigned long x)
{
    r[0] = x & 1UL;
    memset(r + 1, 0, sizeof(mpfq_2_89_elt_ur) - sizeof(unsigned long));
}

/* *Mpfq::gf2n::trivialities::code_for_elt_ur_add */
static inline
void mpfq_2_89_elt_ur_add(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt_ur r, mpfq_2_89_src_elt_ur s1, mpfq_2_89_src_elt_ur s2)
{
    int i;
    for(i = 0 ; i < 3 ; i++)
        r[i] = s1[i] ^ s2[i];
}

/* *Mpfq::gf2n::mul::code_for_mul_ur */
static inline
void mpfq_2_89_mul_ur(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt_ur t, mpfq_2_89_src_elt s1, mpfq_2_89_src_elt s2)
{
    /* 89x89 basecase w=64 slice=4 slicenet=sequence sse2=64 */
    typedef union { __v2di s;
    unsigned long x[2];
     } __v2di_proxy;
#define SHL(x, r) _mm_slli_epi64((x), (r))
#define SHR(x, r) _mm_srli_epi64((x), (r))
#define SHLD(x, r) _mm_slli_si128((x), (r) >> 3)
#define SHRD(x, r) _mm_srli_si128((x), (r) >> 3)
    __v2di u;
    __v2di t0;
    __v2di t1;
    __v2di t2;

    __v2di g[16];
    /* sequence update walk */
    g[0] = (__v2di) { 0, };
    g[1] = (__v2di) { s2[0], s2[1], };
    g[2] = SHL(g[1], 1);
    g[3] = g[2] ^ g[1];
    g[4] = SHL(g[2], 1);
    g[5] = g[4] ^ g[1];
    g[6] = SHL(g[3], 1);
    g[7] = g[6] ^ g[1];
    g[8] = SHL(g[4], 1);
    g[9] = g[8] ^ g[1];
    g[10] = SHL(g[5], 1);
    g[11] = g[10] ^ g[1];
    g[12] = SHL(g[6], 1);
    g[13] = g[12] ^ g[1];
    g[14] = SHL(g[7], 1);
    g[15] = g[14] ^ g[1];

    /* round 0 */
    u = g[s1[0]       & 15];
    t0  = u;
    u = g[s1[0] >>  4 & 15];
    t0 ^= SHL(u,  4); t1  = SHR(u, 60);
    u = g[s1[0] >>  8 & 15];
    t0 ^= SHL(u,  8); t1 ^= SHR(u, 56);
    u = g[s1[0] >> 12 & 15];
    t0 ^= SHL(u, 12); t1 ^= SHR(u, 52);
    u = g[s1[0] >> 16 & 15];
    t0 ^= SHL(u, 16); t1 ^= SHR(u, 48);
    u = g[s1[0] >> 20 & 15];
    t0 ^= SHL(u, 20); t1 ^= SHR(u, 44);
    u = g[s1[0] >> 24 & 15];
    t0 ^= SHL(u, 24); t1 ^= SHR(u, 40);
    u = g[s1[0] >> 28 & 15];
    t0 ^= SHL(u, 28); t1 ^= SHR(u, 36);
    u = g[s1[0] >> 32 & 15];
    t0 ^= SHL(u, 32); t1 ^= SHR(u, 32);
    u = g[s1[0] >> 36 & 15];
    t0 ^= SHL(u, 36); t1 ^= SHR(u, 28);
    u = g[s1[0] >> 40 & 15];
    t0 ^= SHL(u, 40); t1 ^= SHR(u, 24);
    u = g[s1[0] >> 44 & 15];
    t0 ^= SHL(u, 44); t1 ^= SHR(u, 20);
    u = g[s1[0] >> 48 & 15];
    t0 ^= SHL(u, 48); t1 ^= SHR(u, 16);
    u = g[s1[0] >> 52 & 15];
    t0 ^= SHL(u, 52); t1 ^= SHR(u, 12);
    u = g[s1[0] >> 56 & 15];
    t0 ^= SHL(u, 56); t1 ^= SHR(u,  8);
    u = g[s1[0] >> 60 & 15];
    t0 ^= SHL(u, 60); t1 ^= SHR(u,  4);

    /* round 1 */
    u = g[s1[1]       & 15];
    t1 ^= u;
    u = g[s1[1] >>  4 & 15];
    t1 ^= SHL(u,  4); t2  = SHR(u, 60);
    u = g[s1[1] >>  8 & 15];
    t1 ^= SHL(u,  8); t2 ^= SHR(u, 56);
    u = g[s1[1] >> 12 & 15];
    t1 ^= SHL(u, 12); t2 ^= SHR(u, 52);
    u = g[s1[1] >> 16 & 15];
    t1 ^= SHL(u, 16); t2 ^= SHR(u, 48);
    u = g[s1[1] >> 20 & 15];
    t1 ^= SHL(u, 20); t2 ^= SHR(u, 44);
    u = g[s1[1] >> 24 & 1];
    t1 ^= SHL(u, 24); t2 ^= SHR(u, 40);
    /* end */

    /* repair steps */
    /* repair section 200711-200803 */
    __v2di v1 = (__v2di) { s1[0] >> 1, s1[0] >> 1, };
    __v2di v2 = (__v2di) { s1[1] >> 1, s1[1] >> 1, };
    __v2di w;
    __v2di m = (__v2di) { 0x7777777777777777UL, 0x7777777777777777UL, };
    w = -SHR(g[1],63);
    v1 = v1 & m;
    t1 ^= v1 & w;
    v2 = v2 & m;
    t2 ^= v2 & w;
    w = -SHR(g[2],63);
    v1 = SHR(v1, 1) & m;
    t1 ^= v1 & w;
    v2 = SHR(v2, 1) & m;
    t2 ^= v2 & w;
    w = -SHR(g[4],63);
    v1 = SHR(v1, 1) & m;
    t1 ^= v1 & w;
    v2 = SHR(v2, 1) & m;
    t2 ^= v2 & w;

    /* store result */
    {
        {
        __v2di_proxy r;
        r.s = t0 ^ SHLD(t1, 64);
        t[0] = r.x[0];
        t[1] = r.x[1];
    }
        {
        __v2di_proxy r;
        r.s = t2 ^ SHRD(t1, 64);
        t[2] = r.x[0];
    }
    }
#undef SHL
#undef SHR
#undef SHLD
#undef SHRD
}

/* *Mpfq::gf2n::squaring::code_for_sqr_ur */
static inline
void mpfq_2_89_sqr_ur(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt_ur t, mpfq_2_89_src_elt s)
{
    static const mp_limb_t g[16] = {
        0, 1, 4, 5, 16, 17, 20, 21,
        64, 65, 68, 69, 80, 81, 84, 85,
    };
    {
        mp_limb_t u;
        u = g[s[0]       & 15];
    t[0]  = u;
        u = g[s[0] >>  4 & 15];
    t[0] ^= u <<  8;
        u = g[s[0] >>  8 & 15];
    t[0] ^= u << 16;
        u = g[s[0] >> 12 & 15];
    t[0] ^= u << 24;
        u = g[s[0] >> 16 & 15];
    t[0] ^= u << 32;
        u = g[s[0] >> 20 & 15];
    t[0] ^= u << 40;
        u = g[s[0] >> 24 & 15];
    t[0] ^= u << 48;
        u = g[s[0] >> 28 & 15];
    t[0] ^= u << 56;
        u = g[s[0] >> 32 & 15];
    t[1]  = u;
        u = g[s[0] >> 36 & 15];
    t[1] ^= u <<  8;
        u = g[s[0] >> 40 & 15];
    t[1] ^= u << 16;
        u = g[s[0] >> 44 & 15];
    t[1] ^= u << 24;
        u = g[s[0] >> 48 & 15];
    t[1] ^= u << 32;
        u = g[s[0] >> 52 & 15];
    t[1] ^= u << 40;
        u = g[s[0] >> 56 & 15];
    t[1] ^= u << 48;
        u = g[s[0] >> 60 & 15];
    t[1] ^= u << 56;
        u = g[s[1]       & 15];
    t[2]  = u;
        u = g[s[1] >>  4 & 15];
    t[2] ^= u <<  8;
        u = g[s[1] >>  8 & 15];
    t[2] ^= u << 16;
        u = g[s[1] >> 12 & 15];
    t[2] ^= u << 24;
        u = g[s[1] >> 16 & 15];
    t[2] ^= u << 32;
        u = g[s[1] >> 20 & 15];
    t[2] ^= u << 40;
        u = g[s[1] >> 24 & 1];
    t[2] ^= u << 48;
    }
}

/* *Mpfq::gf2n::reduction::code_for_reduce */
static inline
void mpfq_2_89_reduce(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt r, mpfq_2_89_dst_elt_ur t)
{
    {
        mp_limb_t s[2];
        /* 88 excess bits */
        {
            unsigned long z;
            z = t[0];
            s[0] = z;
            z = t[1] & 0x1ffffffUL;
            s[1] = z;
        }
        {
            unsigned long z;
            z = t[1] >> 25;
            s[0]^= z << 38;
            s[0]^= z;
            z >>= 26;
            z^= t[2] << 13;
            s[1]^= z;
            z >>= 13;
            s[0]^= z << 39;
            z >>= 25;
            s[1]^= z;
        }
        /* 37 excess bits */
        {
            unsigned long z;
            z = s[0];
            r[0] = z;
            z = s[1] & 0x1ffffffUL;
            r[1] = z;
        }
        {
            unsigned long z;
            z = s[1] >> 25;
            r[0]^= z << 38;
            r[0]^= z;
            z >>= 26;
            r[1]^= z;
        }
    }
}

/* *Mpfq::gf2n::trivialities::code_for_cmp */
static inline
int mpfq_2_89_cmp(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_elt a, mpfq_2_89_src_elt b)
{
    return mpn_cmp(a, b, 2);
}

/* *Mpfq::gf2n::trivialities::code_for_cmp_ui */
static inline
int mpfq_2_89_cmp_ui(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_elt r, unsigned long x)
{
    int i;
    if (r[0] < (x & 1UL)) return -1;
    if (r[0] > (x & 1UL)) return 1;
    for(i = 1 ; i < 2 ; i++) {
        if (r[i]) return 1;
    }
    return 0;
}

/* *Mpfq::defaults::flatdata::code_for_is_zero, Mpfq::gf2n::trivialities */
static inline
int mpfq_2_89_is_zero(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_elt r)
{
        unsigned int i;
        for(i = 0 ; i < sizeof(mpfq_2_89_elt)/sizeof(r[0]) ; i++) {
            if (r[i]) return 0;
        }
        return 1;
}

/* *Mpfq::defaults::vec::flatdata::code_for_vec_set, Mpfq::defaults::flatdata, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_vec_set(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec r, mpfq_2_89_src_vec s, unsigned int n)
{
    if (r != s) memmove(r, s, n*sizeof(mpfq_2_89_elt));
}

/* *Mpfq::defaults::vec::flatdata::code_for_vec_set_zero, Mpfq::defaults::flatdata, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_vec_set_zero(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec r, unsigned int n)
{
    memset(r, 0, n*sizeof(mpfq_2_89_elt));
}

/* *Mpfq::defaults::vec::getset::code_for_vec_setcoef, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_setcoef(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, mpfq_2_89_src_elt x, unsigned int i)
{
    mpfq_2_89_set(K, w[i], x);
}

/* *Mpfq::defaults::vec::getset::code_for_vec_setcoef_ui, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_setcoef_ui(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, unsigned long x, unsigned int i)
{
    mpfq_2_89_set_ui(K, w[i], x);
}

/* *Mpfq::defaults::vec::getset::code_for_vec_getcoef, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_getcoef(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt x, mpfq_2_89_src_vec w, unsigned int i)
{
    mpfq_2_89_set(K, x, w[i]);
}

/* *Mpfq::defaults::vec::addsub::code_for_vec_add, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_add(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, mpfq_2_89_src_vec u, mpfq_2_89_src_vec v, unsigned int n)
{
        unsigned int i;
    for(i = 0; i < n; i+=1)
        mpfq_2_89_add(K, w[i], u[i], v[i]);
}

/* *Mpfq::defaults::vec::addsub::code_for_vec_neg, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_neg(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, mpfq_2_89_src_vec u, unsigned int n)
{
        unsigned int i;
    for(i = 0; i < n; ++i)
        mpfq_2_89_neg(K, w[i], u[i]);
}

/* *Mpfq::defaults::vec::addsub::code_for_vec_rev, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_rev(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, mpfq_2_89_src_vec u, unsigned int n)
{
    unsigned int nn = n >> 1;
    mpfq_2_89_elt tmp[1];
    mpfq_2_89_init(K, tmp);
    unsigned int i;
    for(i = 0; i < nn; ++i) {
        mpfq_2_89_set(K, tmp[0], u[i]);
        mpfq_2_89_set(K, w[i], u[n-1-i]);
        mpfq_2_89_set(K, w[n-1-i], tmp[0]);
    }
    if (n & 1)
        mpfq_2_89_set(K, w[nn], u[nn]);
    mpfq_2_89_clear(K, tmp);
}

/* *Mpfq::defaults::vec::addsub::code_for_vec_sub, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_sub(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, mpfq_2_89_src_vec u, mpfq_2_89_src_vec v, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; ++i)
        mpfq_2_89_sub(K, w[i], u[i], v[i]);
}

/* *Mpfq::defaults::vec::mul::code_for_vec_scal_mul, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_scal_mul(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, mpfq_2_89_src_vec u, mpfq_2_89_src_elt x, unsigned int n)
{
        unsigned int i;
    for(i = 0; i < n; i+=1)
        mpfq_2_89_mul(K, w[i], u[i], x);
}

/* *Mpfq::defaults::vec::conv::code_for_vec_conv */
static inline
void mpfq_2_89_vec_conv(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, mpfq_2_89_src_vec u, unsigned int n, mpfq_2_89_src_vec v, unsigned int m)
{
    mpfq_2_89_vec_ur tmp;
    mpfq_2_89_vec_ur_init(K, &tmp, m+n-1);
    mpfq_2_89_vec_conv_ur(K, tmp, u, n, v, m);
    mpfq_2_89_vec_reduce(K, w, tmp, m+n-1);
    mpfq_2_89_vec_ur_clear(K, &tmp, m+n-1);
}

/* *Mpfq::defaults::vec::getset::code_for_vec_random, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_random(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, unsigned int n, gmp_randstate_t state)
{
    unsigned int i;
    for(i = 0; i < n; ++i)
        mpfq_2_89_random(K, w[i], state);
}

/* *Mpfq::defaults::vec::getset::code_for_vec_random2, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_random2(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, unsigned int n, gmp_randstate_t state)
{
    unsigned int i;
    for(i = 0; i < n; ++i)
        mpfq_2_89_random2(K, w[i],state);
}

/* *Mpfq::defaults::vec::getset::code_for_vec_cmp, Mpfq::defaults::vec, Mpfq::defaults */
static inline
int mpfq_2_89_vec_cmp(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_vec u, mpfq_2_89_src_vec v, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; ++i) {
        int ret = mpfq_2_89_cmp(K, u[i], v[i]);
        if (ret != 0)
            return ret;
    }
    return 0;
}

/* *Mpfq::defaults::vec::getset::code_for_vec_is_zero, Mpfq::defaults::vec, Mpfq::defaults */
static inline
int mpfq_2_89_vec_is_zero(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_vec r, unsigned int n)
{
    unsigned int i;
    for(i = 0 ; i < n ; i+=1) {
        if (!mpfq_2_89_is_zero(K,r[i])) return 0;
    }
    return 1;
}

/* *Mpfq::defaults::vec::flatdata::code_for_vec_ur_set_zero, Mpfq::defaults::flatdata, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_vec_ur_set_zero(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur r, unsigned int n)
{
    memset(r, 0, n*sizeof(mpfq_2_89_elt_ur));
}

/* *Mpfq::defaults::vec::getset::code_for_vec_ur_set_vec, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_ur_set_vec(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur w, mpfq_2_89_src_vec u, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; i+=1)
        mpfq_2_89_elt_ur_set_elt(K, w[i], u[i]);
}

/* *Mpfq::defaults::vec::flatdata::code_for_vec_ur_set, Mpfq::defaults::flatdata, Mpfq::gf2n::trivialities */
static inline
void mpfq_2_89_vec_ur_set(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur r, mpfq_2_89_src_vec_ur s, unsigned int n)
{
    if (r != s) memmove(r, s, n*sizeof(mpfq_2_89_elt_ur));
}

/* *Mpfq::defaults::vec::getset::code_for_vec_ur_setcoef, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_ur_setcoef(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur w, mpfq_2_89_src_elt_ur x, unsigned int i)
{
    mpfq_2_89_elt_ur_set(K, w[i], x);
}

/* *Mpfq::defaults::vec::getset::code_for_vec_ur_getcoef, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_ur_getcoef(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_elt_ur x, mpfq_2_89_src_vec_ur w, unsigned int i)
{
    mpfq_2_89_elt_ur_set(K, x, w[i]);
}

/* *Mpfq::defaults::vec::addsub::code_for_vec_ur_add, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_ur_add(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur w, mpfq_2_89_src_vec_ur u, mpfq_2_89_src_vec_ur v, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; i+=1)
        mpfq_2_89_elt_ur_add(K, w[i], u[i], v[i]);
}

/* *Mpfq::defaults::vec::addsub::code_for_vec_ur_sub, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_ur_sub(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur w, mpfq_2_89_src_vec_ur u, mpfq_2_89_src_vec_ur v, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; i+=1)
        mpfq_2_89_elt_ur_sub(K, w[i], u[i], v[i]);
}

/* *Mpfq::defaults::vec::addsub::code_for_vec_ur_neg, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_ur_neg(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur w, mpfq_2_89_src_vec_ur u, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; ++i)
        mpfq_2_89_elt_ur_neg(K, w[i], u[i]);
}

/* *Mpfq::defaults::vec::addsub::code_for_vec_ur_rev, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_ur_rev(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur w, mpfq_2_89_src_vec_ur u, unsigned int n)
{
    unsigned int nn = n >> 1;
    mpfq_2_89_elt_ur tmp[1];
    mpfq_2_89_elt_ur_init(K, tmp);
    unsigned int i;
    for(i = 0; i < nn; ++i) {
        mpfq_2_89_elt_ur_set(K, tmp[0], u[i]);
        mpfq_2_89_elt_ur_set(K, w[i], u[n-1-i]);
        mpfq_2_89_elt_ur_set(K, w[n-1-i], tmp[0]);
    }
    if (n & 1)
        mpfq_2_89_elt_ur_set(K, w[nn], u[nn]);
    mpfq_2_89_elt_ur_clear(K, tmp);
}

/* *Mpfq::defaults::vec::mul::code_for_vec_scal_mul_ur, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_scal_mul_ur(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur w, mpfq_2_89_src_vec u, mpfq_2_89_src_elt x, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; i+=1)
        mpfq_2_89_mul_ur(K, w[i], u[i], x);
}

/* *Mpfq::defaults::vec::conv::code_for_vec_conv_ur */
static inline
void mpfq_2_89_vec_conv_ur_n(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur w, mpfq_2_89_src_vec u, mpfq_2_89_src_vec v, unsigned int n)
{
    if (n == 0)
        return;
    if (n == 1) {
        mpfq_2_89_mul_ur(K, w[0], u[0], v[0]);
        return;
    }
    if (n == 2) {  // Kara 2
        mpfq_2_89_elt t1, t2;
        mpfq_2_89_init(K, &t1);
        mpfq_2_89_init(K, &t2);
        mpfq_2_89_mul_ur(K, w[0], u[0], v[0]);
        mpfq_2_89_mul_ur(K, w[2], u[1], v[1]);
        mpfq_2_89_add(K, t1, u[0], u[1]);
        mpfq_2_89_add(K, t2, v[0], v[1]);
        mpfq_2_89_mul_ur(K, w[1], t1, t2);
        mpfq_2_89_elt_ur_sub(K, w[1], w[1], w[0]);
        mpfq_2_89_elt_ur_sub(K, w[1], w[1], w[2]);
        mpfq_2_89_clear(K, &t1);
        mpfq_2_89_clear(K, &t2);
        return;
    }
    if (n == 3) {  // do it in 6
        mpfq_2_89_elt t1, t2;
        mpfq_2_89_elt_ur s;
        mpfq_2_89_init(K, &t1);
        mpfq_2_89_init(K, &t2);
        mpfq_2_89_elt_ur_init(K, &s);
        // a0*b0*(1 - X)
        mpfq_2_89_mul_ur(K, w[0], u[0], v[0]);
        mpfq_2_89_elt_ur_neg(K, w[1], w[0]);
        // a1*b1*(-X + 2*X^2 - X^3)
        mpfq_2_89_mul_ur(K, w[2], u[1], v[1]);
        mpfq_2_89_elt_ur_neg(K, w[3], w[2]);
        mpfq_2_89_elt_ur_add(K, w[2], w[2], w[2]);
        mpfq_2_89_elt_ur_add(K, w[1], w[1], w[3]);
        // a2*b2*(-X^3+X^4)
        mpfq_2_89_mul_ur(K, w[4], u[2], v[2]);
        mpfq_2_89_elt_ur_sub(K, w[3], w[3], w[4]);
        // (a0+a1)*(b0+b1)*(X - X^2)
        mpfq_2_89_add(K, t1, u[0], u[1]);
        mpfq_2_89_add(K, t2, v[0], v[1]);
        mpfq_2_89_mul_ur(K, s, t1, t2);
        mpfq_2_89_elt_ur_add(K, w[1], w[1], s);
        mpfq_2_89_elt_ur_sub(K, w[2], w[2], s);
        // (a1+a2)*(b1+b2)*(X^3 - X^2)
        mpfq_2_89_add(K, t1, u[1], u[2]);
        mpfq_2_89_add(K, t2, v[1], v[2]);
        mpfq_2_89_mul_ur(K, s, t1, t2);
        mpfq_2_89_elt_ur_add(K, w[3], w[3], s);
        mpfq_2_89_elt_ur_sub(K, w[2], w[2], s);
        // (a0+a1+a2)*(b0+b1+b2)* X^2
        mpfq_2_89_add(K, t1, u[0], t1);
        mpfq_2_89_add(K, t2, v[0], t2);
        mpfq_2_89_mul_ur(K, s, t1, t2);
        mpfq_2_89_elt_ur_add(K, w[2], w[2], s);
        return;
    }
    unsigned int n0, n1;
    n0 = n / 2;
    n1 = n - n0;
    mpfq_2_89_vec_conv_ur_n(K, w, u, v, n0);
    mpfq_2_89_vec_conv_ur_n(K, w + 2*n0, u + n0, v + n0, n1);
    mpfq_2_89_elt_ur_set_ui(K, w[2*n0-1], 0);

    mpfq_2_89_vec tmpu, tmpv;
    mpfq_2_89_vec_ur tmpw;
    mpfq_2_89_vec_init(K, &tmpu, n1);
    mpfq_2_89_vec_init(K, &tmpv, n1);
    mpfq_2_89_vec_ur_init(K, &tmpw, 2*n1-1);

    mpfq_2_89_vec_set(K, tmpu, u, n0);
    if (n1 != n0)
        mpfq_2_89_set_ui(K, tmpu[n0], 0);
    mpfq_2_89_vec_add(K, tmpu, tmpu, u+n0, n1);
    mpfq_2_89_vec_set(K, tmpv, v, n0);
    if (n1 != n0)
        mpfq_2_89_set_ui(K, tmpv[n0], 0);
    mpfq_2_89_vec_add(K, tmpv, tmpv, v+n0, n1);
    mpfq_2_89_vec_conv_ur_n(K, tmpw, tmpu, tmpv, n1);
    mpfq_2_89_vec_ur_sub(K, tmpw, tmpw, w, 2*n0-1);
    mpfq_2_89_vec_ur_sub(K, tmpw, tmpw, w + 2*n0, 2*n1-1);
    mpfq_2_89_vec_ur_add(K, w + n0, w + n0, tmpw, 2*n1-1);

    mpfq_2_89_vec_clear(K, &tmpu, n1);
    mpfq_2_89_vec_clear(K, &tmpv, n1);
    mpfq_2_89_vec_ur_clear(K, &tmpw, 2*n1-1);
    return;
}

/* *Mpfq::defaults::vec::conv::code_for_vec_conv_ur */
static inline
void mpfq_2_89_vec_conv_ur(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec_ur w, mpfq_2_89_src_vec u, unsigned int n, mpfq_2_89_src_vec v, unsigned int m)
{
    unsigned int i, j MAYBE_UNUSED, k;
    mpfq_2_89_elt_ur acc, z;
    mpfq_2_89_elt_ur_init(K, &acc);
    mpfq_2_89_elt_ur_init(K, &z);
    // swap pointers to have n <= m
    mpfq_2_89_src_vec uu, vv;
    if (n <= m) {
        uu = u; vv = v;
    } else {
        uu = v; vv = u;
        unsigned int tmp = n;
        n = m; m = tmp;
    }
    for(k = 0; k < n; ++k) {
        mpfq_2_89_mul_ur(K, acc, uu[0], vv[k]);
        for(i = 1; i <= k; ++i) {
            mpfq_2_89_mul_ur(K, z, uu[i], vv[k-i]);
            mpfq_2_89_elt_ur_add(K, acc, acc, z);
        }
        mpfq_2_89_elt_ur_set(K, w[k], acc);
    }
    for(k = n; k < m; ++k) {
        mpfq_2_89_mul_ur(K, acc, uu[0], vv[k]);
        for(i = 1; i < n; ++i) {
            mpfq_2_89_mul_ur(K, z, uu[i], vv[k-i]);
            mpfq_2_89_elt_ur_add(K, acc, acc, z);
        }
        mpfq_2_89_elt_ur_set(K, w[k], acc);
    }
    for(k = m; k < n+m-1; ++k) {
        mpfq_2_89_mul_ur(K, acc, uu[k-m+1], vv[m-1]);
        for(i = k-m+2; i < n; ++i) {
            mpfq_2_89_mul_ur(K, z, uu[i], vv[k-i]);
            mpfq_2_89_elt_ur_add(K, acc, acc, z);
        }
        mpfq_2_89_elt_ur_set(K, w[k], acc);
    }
    mpfq_2_89_elt_ur_clear(K, &acc);
    mpfq_2_89_elt_ur_clear(K, &z);
}

/* *Mpfq::defaults::vec::mul::code_for_vec_reduce, Mpfq::defaults::vec, Mpfq::defaults */
static inline
void mpfq_2_89_vec_reduce(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_vec w, mpfq_2_89_dst_vec_ur u, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; i+=1)
        mpfq_2_89_reduce(K, w[i], u[i]);
}

/* *Mpfq::defaults::poly::code_for_poly_init */
static inline
void mpfq_2_89_poly_init(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_poly p, unsigned int n)
{
    mpfq_2_89_vec_init(k, &(p->c), n);
    p->alloc=n;
    p->size=0;
}

/* *Mpfq::defaults::poly::code_for_poly_clear */
static inline
void mpfq_2_89_poly_clear(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_poly p)
{
    mpfq_2_89_vec_clear(k, &(p->c), p->alloc);
}

/* *Mpfq::defaults::poly::code_for_poly_set */
static inline
void mpfq_2_89_poly_set(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, mpfq_2_89_src_poly u)
{
    if (w->alloc < u->size) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, u->size);
        w->alloc = u->size;
    }
    mpfq_2_89_vec_set(k, w->c, u->c, u->size);
    w->size = u->size;
}

/* *Mpfq::defaults::poly::code_for_poly_setcoef */
static inline
void mpfq_2_89_poly_setcoef(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, mpfq_2_89_src_elt x, unsigned int i)
{
    if (w->alloc < i+1) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, i+1);
        w->alloc = i+1;
    }
    mpfq_2_89_vec_setcoef(k, w->c, x, i);
    if (w->size < i+1)
        w->size = i+1;
}

/* *Mpfq::defaults::poly::code_for_poly_setcoef_ui */
static inline
void mpfq_2_89_poly_setcoef_ui(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, unsigned long x, unsigned int i)
{
    if (w->alloc < i+1) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, i+1);
        w->alloc = i+1;
    }
    mpfq_2_89_vec_setcoef_ui(k, w->c, x, i);
    if (w->size < i+1)
        w->size = i+1;
}

/* *Mpfq::defaults::poly::code_for_poly_getcoef */
static inline
void mpfq_2_89_poly_getcoef(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_elt x, mpfq_2_89_src_poly w, unsigned int i)
{
    assert (w->size > i);
    mpfq_2_89_vec_getcoef(k, x, w->c, i);
}

/* *Mpfq::defaults::poly::code_for_poly_deg */
static inline
int mpfq_2_89_poly_deg(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_poly w)
{
    if (w->size == 0)
        return -1;
    int deg = w->size-1;
    while ((deg >= 0) && (mpfq_2_89_cmp_ui(K, (w->c)[deg], 0) == 0))
        deg--;
    return deg;
}

/* *Mpfq::defaults::poly::code_for_poly_add */
static inline
void mpfq_2_89_poly_add(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, mpfq_2_89_src_poly u, mpfq_2_89_src_poly v)
{
    unsigned int minsize MAYBE_UNUSED = MIN(u->size, v->size);
    unsigned int maxsize MAYBE_UNUSED = MAX(u->size, v->size);
    if (w->alloc < maxsize) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, maxsize);
        w->alloc = maxsize;
    }
    if (u->size <= v->size) {
        mpfq_2_89_vec_add(k, w->c, u->c, v->c, u->size);
        mpfq_2_89_vec_set(k, (w->c)+(u->size), (v->c)+(u->size), v->size-u->size);
    } else {
        mpfq_2_89_vec_add(k, w->c, u->c, v->c, v->size);
        mpfq_2_89_vec_set(k, (w->c)+(v->size), (u->c)+(v->size), u->size-v->size);
    }
    w->size=maxsize;
    unsigned int wdeg = mpfq_2_89_poly_deg(k, w);
    w->size=wdeg+1;
}

/* *Mpfq::defaults::poly::code_for_poly_sub */
static inline
void mpfq_2_89_poly_sub(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, mpfq_2_89_src_poly u, mpfq_2_89_src_poly v)
{
    unsigned int minsize MAYBE_UNUSED = MIN(u->size, v->size);
    unsigned int maxsize MAYBE_UNUSED = MAX(u->size, v->size);
    if (w->alloc < maxsize) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, maxsize);
        w->alloc = maxsize;
    }
    if (u->size <= v->size) {
        mpfq_2_89_vec_sub(k, w->c, u->c, v->c, u->size);
        unsigned int i;
        for (i = u->size; i < v->size; ++i)
            mpfq_2_89_neg(k, (w->c)[i], (v->c)[i]);
    } else {
        mpfq_2_89_vec_sub(k, w->c, u->c, v->c, v->size);
        mpfq_2_89_vec_set(k, (w->c)+(v->size), (u->c)+(v->size), u->size-v->size);
    }
    w->size=maxsize;
    unsigned int wdeg = mpfq_2_89_poly_deg(k, w);
    w->size=wdeg+1;
}

/* *Mpfq::defaults::poly::code_for_poly_add_ui */
static inline
void mpfq_2_89_poly_add_ui(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, mpfq_2_89_src_poly u, unsigned long x)
{
    if (u->size == 0) {
        if (x == 0) {
            w->size = 0;
            return;
        }
        if (w->alloc == 0) {
            mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, 1);
            w->alloc = 1;
        }
        w->size = 1;
        mpfq_2_89_vec_setcoef_ui(k, w->c, x, 0);
        return;
    }
    if (w->alloc < u->size) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, u->size);
        w->alloc = u->size;
    }
    mpfq_2_89_add_ui(k, (w->c)[0], (u->c)[0], x);
    mpfq_2_89_vec_set(k, (w->c)+1, (u->c)+1, u->size - 1);
    w->size=u->size;
    unsigned int wdeg = mpfq_2_89_poly_deg(k, w);
    w->size=wdeg+1;
}

/* *Mpfq::defaults::poly::code_for_poly_sub_ui */
static inline
void mpfq_2_89_poly_sub_ui(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, mpfq_2_89_src_poly u, unsigned long x)
{
    if (u->size == 0) {
        if (x == 0) {
            w->size = 0;
            return;
        }
        if (w->alloc == 0) {
            mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, 1);
            w->alloc = 1;
        }
        w->size = 1;
        mpfq_2_89_vec_setcoef_ui(k, w->c, x, 0);
        mpfq_2_89_neg(k, (w->c)[0], (w->c)[0]);
        return;
    }
    if (w->alloc < u->size) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, u->size);
        w->alloc = u->size;
    }
    mpfq_2_89_sub_ui(k, (w->c)[0], (u->c)[0], x);
    mpfq_2_89_vec_set(k, (w->c)+1, (u->c)+1, u->size - 1);
    w->size=u->size;
    unsigned int wdeg = mpfq_2_89_poly_deg(k, w);
    w->size=wdeg+1;
}

/* *Mpfq::defaults::poly::code_for_poly_neg */
static inline
void mpfq_2_89_poly_neg(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, mpfq_2_89_src_poly u)
{
    if (w->alloc < u->size) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, u->size);
        w->alloc = u->size;
    }
    mpfq_2_89_vec_neg(k, w->c, u->c, u->size);
    w->size = u->size;
}

/* *Mpfq::defaults::poly::code_for_poly_scal_mul */
static inline
void mpfq_2_89_poly_scal_mul(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, mpfq_2_89_src_poly u, mpfq_2_89_src_elt x)
{
    if (mpfq_2_89_cmp_ui(k, x, 0) == 0) {
        w->size = 0;
        return;
    }
    unsigned int n = u->size;
    if (w->alloc < n) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, n);
        w->alloc = n;
    }
    mpfq_2_89_vec_scal_mul(k, w->c, u->c, x, n);
    w->size=n;
}

/* *Mpfq::defaults::poly::code_for_poly_mul */
static inline
void mpfq_2_89_poly_mul(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_poly w, mpfq_2_89_src_poly u, mpfq_2_89_src_poly v)
{
    unsigned int usize = mpfq_2_89_poly_deg(K, u)+1;
    unsigned int vsize = mpfq_2_89_poly_deg(K, v)+1;
    if ((usize == 0) || (vsize == 0)) {
        w->size = 0;
        return;
    }
    unsigned int wsize = usize + vsize - 1;
    if (w->alloc < wsize) {
        mpfq_2_89_vec_reinit(K, &(w->c), w->alloc, wsize);
        w->alloc = wsize;
    }
    mpfq_2_89_vec_conv(K, w->c, u->c, usize, v->c, vsize);
    w->size=wsize;
}

/* *Mpfq::defaults::polygcd::code_for_poly_gcd, Mpfq::defaults::poly */
static inline
void mpfq_2_89_poly_gcd(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly g, mpfq_2_89_src_poly a0, mpfq_2_89_src_poly b0)
{
    mpfq_2_89_poly a,b,q,r;
    int da0=mpfq_2_89_poly_deg(k,a0), db0=mpfq_2_89_poly_deg(k,b0);
    if (db0==-1)
     mpfq_2_89_poly_set(k,g,a0);
    else {
     mpfq_2_89_poly_init(k,a,da0+1);
     mpfq_2_89_poly_init(k,b,db0+1);
     mpfq_2_89_poly_init(k,q,1);
     mpfq_2_89_poly_init(k,r,db0);
     mpfq_2_89_poly_set(k,a,a0);
     mpfq_2_89_poly_set(k,b,b0);
     while (mpfq_2_89_poly_deg(k,b)>=0) {
      mpfq_2_89_poly_divmod(k,q,r,a,b);
      mpfq_2_89_poly_set(k,a,b);
      mpfq_2_89_poly_set(k,b,r);
     }
     mpfq_2_89_poly_setmonic(k,g,a);
    mpfq_2_89_poly_clear(k,a);
    mpfq_2_89_poly_clear(k,b);
    mpfq_2_89_poly_clear(k,q);
    mpfq_2_89_poly_clear(k,r);
    }
}

/* *Mpfq::defaults::polygcd::code_for_poly_xgcd, Mpfq::defaults::poly */
static inline
void mpfq_2_89_poly_xgcd(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly g, mpfq_2_89_dst_poly u0, mpfq_2_89_dst_poly v0, mpfq_2_89_src_poly a0, mpfq_2_89_src_poly b0)
{
    mpfq_2_89_poly a,b,u,v,w,x,q,r;
    mpfq_2_89_elt c;
    mpfq_2_89_init(k,&c);
    int da0=mpfq_2_89_poly_deg(k,a0), db0=mpfq_2_89_poly_deg(k,b0), dega;
    if (db0==-1) {
     if (da0==-1) {
      mpfq_2_89_poly_set(k,u0,a0);
      mpfq_2_89_poly_set(k,v0,b0);
      mpfq_2_89_poly_set(k,g,a0);
     } else {
      mpfq_2_89_poly_getcoef(k,c,a0,da0);
      mpfq_2_89_inv(k,c,c);
      mpfq_2_89_poly_scal_mul(k,g,a0,c);
      mpfq_2_89_poly_set(k,v0,b0);
      mpfq_2_89_poly_set(k,u0,b0);
      mpfq_2_89_poly_setcoef(k,u0,c,0);
     }
    }
    else {
     mpfq_2_89_poly_init(k,a,da0+1);
     mpfq_2_89_poly_init(k,b,db0+1);
     mpfq_2_89_poly_init(k,q,1);
     mpfq_2_89_poly_init(k,r,db0);
     mpfq_2_89_poly_set(k,a,a0);
     mpfq_2_89_poly_set(k,b,b0);
     mpfq_2_89_poly_init(k,u,1);
     mpfq_2_89_poly_init(k,v,1);
     mpfq_2_89_poly_init(k,w,1);
     mpfq_2_89_poly_init(k,x,1);
     mpfq_2_89_poly_setcoef_ui(k,u,1,0);
     mpfq_2_89_poly_setcoef_ui(k,x,1,0);
     /* u*a_initial + v*b_initial = a */
     /* w*a_initial + x*b_initial = b */
     while (mpfq_2_89_poly_deg(k,b)>=0) {
      mpfq_2_89_poly_divmod(k,q,r,a,b);
      mpfq_2_89_poly_set(k,a,b);  /* a,b <- b,a-qb=r */
      mpfq_2_89_poly_set(k,b,r);
      mpfq_2_89_poly_mul(k,r,q,w);
      mpfq_2_89_poly_sub(k,r,u,r);
      mpfq_2_89_poly_set(k,u,w);   /* u,w <- w,u-qw */
      mpfq_2_89_poly_set(k,w,r);
      mpfq_2_89_poly_mul(k,r,q,x); /* v,x <- x,v-qx */
      mpfq_2_89_poly_sub(k,r,v,r);
      mpfq_2_89_poly_set(k,v,x);
      mpfq_2_89_poly_set(k,x,r);
     }
     dega=mpfq_2_89_poly_deg(k,a);
     mpfq_2_89_poly_getcoef(k,c,a,dega);
     mpfq_2_89_inv(k,c,c);
     mpfq_2_89_poly_scal_mul(k,g,a,c);
     mpfq_2_89_poly_scal_mul(k,u0,u,c);
     mpfq_2_89_poly_scal_mul(k,v0,v,c);
     mpfq_2_89_poly_clear(k,a);
     mpfq_2_89_poly_clear(k,b);
     mpfq_2_89_poly_clear(k,u);
     mpfq_2_89_poly_clear(k,v);
     mpfq_2_89_poly_clear(k,w);
     mpfq_2_89_poly_clear(k,x);
     mpfq_2_89_poly_clear(k,q);
     mpfq_2_89_poly_clear(k,r);
    }
    mpfq_2_89_clear(k,&c);
}

/* *Mpfq::defaults::poly::code_for_poly_random */
static inline
void mpfq_2_89_poly_random(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, unsigned int n, gmp_randstate_t state)
{
    n++;
    if (w->alloc < n) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, n);
        w->alloc = n;
    }
    mpfq_2_89_vec_random(k, w->c, n,state);
    w->size=n;
    int wdeg = mpfq_2_89_poly_deg(k, w);
    w->size=wdeg+1;
}

/* *Mpfq::defaults::poly::code_for_poly_random2 */
static inline
void mpfq_2_89_poly_random2(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, unsigned int n, gmp_randstate_t state)
{
    n++;
    if (w->alloc < n) {
        mpfq_2_89_vec_reinit(k, &(w->c), w->alloc, n);
        w->alloc = n;
    }
    mpfq_2_89_vec_random2(k, w->c, n,state);
    w->size=n;
    int wdeg = mpfq_2_89_poly_deg(k, w);
    w->size=wdeg+1;
}

/* *Mpfq::defaults::poly::code_for_poly_cmp */
static inline
int mpfq_2_89_poly_cmp(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_src_poly u, mpfq_2_89_src_poly v)
{
    if (u->size != v->size)
        return (int)(u->size) - (int)(v->size);
    else
        return mpfq_2_89_vec_cmp(k, u->c, v->c, u->size);
}

/* *Mpfq::defaults::poly::code_for_poly_asprint */
static inline
void mpfq_2_89_poly_asprint(mpfq_2_89_dst_field k MAYBE_UNUSED, char * * pstr, mpfq_2_89_src_poly w)
{
    mpfq_2_89_vec_asprint(k, pstr, w->c, w->size);
}

/* *Mpfq::defaults::poly::code_for_poly_fprint */
static inline
void mpfq_2_89_poly_fprint(mpfq_2_89_dst_field k MAYBE_UNUSED, FILE * file, mpfq_2_89_src_poly w)
{
    mpfq_2_89_vec_fprint(k, file, w->c, w->size);
}

/* *Mpfq::defaults::poly::code_for_poly_print */
static inline
void mpfq_2_89_poly_print(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_src_poly w)
{
    mpfq_2_89_vec_print(k, w->c, w->size);
}

/* *Mpfq::defaults::poly::code_for_poly_sscan */
static inline
int mpfq_2_89_poly_sscan(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w, const char * str)
{
    int ret;
    ret = mpfq_2_89_vec_sscan(k, &(w->c), &(w->alloc), str);
    w->size = w->alloc;
    return ret;
}

/* *Mpfq::defaults::poly::code_for_poly_fscan */
static inline
int mpfq_2_89_poly_fscan(mpfq_2_89_dst_field k MAYBE_UNUSED, FILE * file, mpfq_2_89_dst_poly w)
{
    int ret;
    ret = mpfq_2_89_vec_fscan(k, file, &(w->c), &(w->alloc));
    w->size = w->alloc;
    return ret;
}

/* *Mpfq::defaults::poly::code_for_poly_scan */
static inline
int mpfq_2_89_poly_scan(mpfq_2_89_dst_field k MAYBE_UNUSED, mpfq_2_89_dst_poly w)
{
    int ret;
    ret = mpfq_2_89_vec_scan(k, &(w->c), &(w->alloc));
    w->size = w->alloc;
    return ret;
}


#endif  /* MPFQ_2_89_H_ */

/* vim:set ft=cpp: */
