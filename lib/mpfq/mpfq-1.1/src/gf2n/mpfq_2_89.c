/* MPFQ generated file -- do not edit */

#include "mpfq/mpfq_2_89.h"

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


/* Functions operating on the field structure */

/* Element allocation functions */

/* Elementary assignment functions */

/* Assignment of random values */

/* Arithmetic operations on elements */

/* Operations involving unreduced elements */

/* Comparison functions */

/* Input/output functions */
/* *Mpfq::gf2n::io::code_for_asprint */
void mpfq_2_89_asprint(mpfq_2_89_dst_field k, char * * pstr, mpfq_2_89_src_elt x)
{
    int type = k->io_type;
    int i, n; 
    
    // Numerical io.
    if (type <= 16) {
        // allocate enough room for base 2 conversion.
        *pstr = (char *)malloc((89+1)*sizeof(char));
        if (*pstr == NULL)
            MALLOC_FAILED();
    
        mp_limb_t tmp[2 + 1];
        for (i = 0; i < 2; ++i)
            tmp[i] = x[i];
    
        // mpn_get_str() needs a non-zero most significant limb
        int msl = 2 - 1;
        while ((msl > 0) && (tmp[msl] == 0))
            msl--;
        msl++;
        if ((msl == 1) && (tmp[0] == 0)) {
            (*pstr)[0] = '0';
            (*pstr)[1] = '\0';
            return;
        }
        n = mpn_get_str((unsigned char*)(*pstr), type, tmp, msl);
        for (i = 0; i < n; ++i) {
            char c = (*pstr)[i] + '0';
            if (c > '9')
                c = c-'0'+'a'-10;
            (*pstr)[i] = c;
        }
        (*pstr)[n] = '\0';
    
        // Remove leading 0s
        int shift = 0;
        while (((*pstr)[shift] == '0') && ((*pstr)[shift+1] != '\0')) 
            shift++;
        if (shift>0) {
            i = 0;
            while ((*pstr)[i+shift] != '\0') {
                (*pstr)[i] = (*pstr)[i+shift];
                i++;
            }
            (*pstr)[i] = '\0';
        }
    
        // Return '0' instead of empty string for zero element
        if ((*pstr)[0] == '\0') {
            (*pstr)[0] = '0';
            (*pstr)[1] = '\0';
        }
    } 
    // Polynomial io.
    else {
        char c = (char)type;
        // allocate (more than) enough room for polynomial conversion.
        // Warning: this is for exponent that fit in 3 digits
        *pstr = (char *)malloc((8*89+1)*sizeof(char));
        if (*pstr == NULL)
            MALLOC_FAILED();
        {
            unsigned int j;
            int sth = 0;
            char *ptr = *pstr;
            for(j = 0 ; j < 89 ; j++) {
                if (x[j/64] >> (j % 64) & 1UL) {
                	if (sth) {
                        *ptr++ = ' ';
                        *ptr++ = '+';
                        *ptr++ = ' ';
                    }
                	sth = 1;
                	if (j == 0) {
                        *ptr++ = '1';      
                	} else if (j == 1) {
                        *ptr++ = c;      
                	} else {
                        int ret = sprintf(ptr,"%c^%d",c,j);
                        ptr += ret;
                	}
                }
            }
            if (!sth) {
                *ptr++ = '0';
            }
            *ptr = '\0';
        }
    }
}

/* *Mpfq::defaults::code_for_fprint */
void mpfq_2_89_fprint(mpfq_2_89_dst_field k, FILE * file, mpfq_2_89_src_elt x)
{
    char *str;
    mpfq_2_89_asprint(k,&str,x);
    fprintf(file,"%s",str);
    free(str);
}

/* *Mpfq::gf2n::io::code_for_sscan */
int mpfq_2_89_sscan(mpfq_2_89_dst_field k, mpfq_2_89_dst_elt z, const char * str)
{
    if (k->io_type <= 16) {
        char *tmp;
        int len = strlen(str);
        tmp = (char *)malloc(len+1);
        int i;
        for (i = 0; i < len; ++i) {
            if (str[i] > '9')
                tmp[i] = str[i] + 10 - 'a';
            else 
                tmp[i] = str[i] - '0';
        }
        mp_limb_t *zz;
        // Allocate one limb per byte... very conservative.
        zz = (mp_limb_t *)malloc(len*sizeof(mp_limb_t));
        int ret = mpn_set_str(zz, tmp, len, k->io_type);
        free(tmp);
        if (ret > 2) {
            free(zz);
            return 0;
        }
        for (i = 0; i < ret; ++i)
            z[i] = zz[i];
        for (i = ret; i < 2; ++i)
            z[i] = 0;
        free(zz);
        return 1;
    } else {
        fprintf(stderr, "Polynomial io not implemented for reading\n");
        return 0;
    }
}

/* *Mpfq::gf2n::io::code_for_fscan */
int mpfq_2_89_fscan(mpfq_2_89_dst_field k, FILE * file, mpfq_2_89_dst_elt z)
{
    char *tmp;
    int allocated, len=0;
    int c, start=0;
    allocated=100;
    tmp = (char *)malloc(allocated*sizeof(char));
    if (!tmp)
        MALLOC_FAILED();
    for(;;) {
        c = fgetc(file);
        if (c==EOF)
            break;
        if (isspace((int)(unsigned char)c)) {
            if (start==0)
                continue;
            else
                break;
        } else {
            if (len==allocated) {
                allocated+=100;
                tmp = (char*)realloc(tmp, allocated*sizeof(char));
            }
            tmp[len]=c;
            len++;
        }
    }
    if (len==allocated) {
        allocated+=1;
        tmp = (char*)realloc(tmp, allocated*sizeof(char));
    }
    tmp[len]='\0';
    int ret=mpfq_2_89_sscan(k,z,tmp);
    free(tmp);
    return ret;
}


/* Vector functions */
/* *Mpfq::defaults::vec::alloc::code_for_vec_init, Mpfq::defaults::vec, Mpfq::defaults */
void mpfq_2_89_vec_init(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_vec * v, unsigned int n)
{
    unsigned int i;
    *v = (mpfq_2_89_vec) malloc (n*sizeof(mpfq_2_89_elt));
    for(i = 0; i < n; i+=1)
        mpfq_2_89_init(K, (*v) + i);
}

/* *Mpfq::defaults::vec::alloc::code_for_vec_reinit, Mpfq::defaults::vec, Mpfq::defaults */
void mpfq_2_89_vec_reinit(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_vec * v, unsigned int n, unsigned int m)
{
    if (n < m) { // increase size
        unsigned int i;
        *v = (mpfq_2_89_vec) realloc (*v, m * sizeof(mpfq_2_89_elt));
        for(i = n; i < m; i+=1)
            mpfq_2_89_init(K, (*v) + i);
    } else if (m < n) { // decrease size
        unsigned int i;
        for(i = m; i < n; i+=1)
            mpfq_2_89_clear(K, (*v) + i);
        *v = (mpfq_2_89_vec) realloc (*v, m * sizeof(mpfq_2_89_elt));
    }
}

/* *Mpfq::defaults::vec::alloc::code_for_vec_clear, Mpfq::defaults::vec, Mpfq::defaults */
void mpfq_2_89_vec_clear(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_vec * v, unsigned int n)
{
        unsigned int i;
    for(i = 0; i < n; i+=1)
        mpfq_2_89_clear(K, (*v) + i);
    free(*v);
}

/* *Mpfq::defaults::vec::io::code_for_vec_asprint, Mpfq::defaults::vec, Mpfq::defaults */
void mpfq_2_89_vec_asprint(mpfq_2_89_dst_field K MAYBE_UNUSED, char * * pstr, mpfq_2_89_src_vec w, unsigned int n)
{
    if (n == 0) {
        *pstr = (char *)malloc(4*sizeof(char));
        sprintf(*pstr, "[ ]");
        return;
    }
    int alloc = 100;
    int len = 0;
    *pstr = (char *)malloc(alloc*sizeof(char));
    char *str = *pstr;
    *str++ = '[';
    *str++ = ' ';
    len = 2;
    unsigned int i;
    for(i = 0; i < n; i+=1) {
        if (i) {
            (*pstr)[len++] = ',';
            (*pstr)[len++] = ' ';
        }
        char *tmp;
        mpfq_2_89_asprint(K, &tmp, w[i]);
        int ltmp = strlen(tmp);
        if (len+ltmp+4 > alloc) {
            alloc = len+ltmp+100;
            *pstr = (char *)realloc(*pstr, alloc*sizeof(char));
        }
        strncpy(*pstr+len, tmp, ltmp+4);
        len += ltmp;
        free(tmp);
    }
    (*pstr)[len++] = ' ';
    (*pstr)[len++] = ']';
    (*pstr)[len] = '\0';
}

/* *Mpfq::defaults::vec::io::code_for_vec_fprint, Mpfq::defaults::vec, Mpfq::defaults */
void mpfq_2_89_vec_fprint(mpfq_2_89_dst_field K MAYBE_UNUSED, FILE * file, mpfq_2_89_src_vec w, unsigned int n)
{
    char *str;
    mpfq_2_89_vec_asprint(K,&str,w,n);
    fprintf(file,"%s",str);
    free(str);
}

/* *Mpfq::defaults::vec::io::code_for_vec_print, Mpfq::defaults::vec, Mpfq::defaults */
void mpfq_2_89_vec_print(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_src_vec w, unsigned int n)
{
    mpfq_2_89_vec_fprint(K,stdout,w,n);
}

/* *Mpfq::defaults::vec::io::code_for_vec_sscan, Mpfq::defaults::vec, Mpfq::defaults */
int mpfq_2_89_vec_sscan(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_vec * w, unsigned int * n, const char * str)
{
    // start with a clean vector
    mpfq_2_89_vec_reinit(K, w, *n, 0);
    *n = 0;
    while (isspace((int)(unsigned char)str[0]))
        str++;
    if (str[0] != '[')
        return 0;
    str++;
    if (str[0] != ' ')
        return 0;
    str++;
    if (str[0] == ']') {
        return 1;
    }
    unsigned int i = 0;
    for (;;) {
        if (*n < i+1) {
            mpfq_2_89_vec_reinit(K, w, *n, i+1);
            *n = i+1;
        }
        int ret;
        ret = mpfq_2_89_sscan(K, (*w)[i], str);
        if (!ret) {
            return 0;
        }
        i++;
        while (isdigit((int)(unsigned char)str[0]))
            str++;
        while (isspace((int)(unsigned char)str[0]))
            str++;
        if (str[0] == ']')
            break;
        if (str[0] != ',')
            return 0;
        str++;
        while (isspace((int)(unsigned char)str[0]))
            str++;
    }
    return 1;
}

/* *Mpfq::defaults::vec::io::code_for_vec_fscan, Mpfq::defaults::vec, Mpfq::defaults */
int mpfq_2_89_vec_fscan(mpfq_2_89_dst_field K MAYBE_UNUSED, FILE * file, mpfq_2_89_vec * w, unsigned int * n)
{
    char *tmp;
    int c;
    int allocated, len=0;
    allocated=100;
    tmp = (char *)malloc(allocated*sizeof(char));
    if (!tmp)
        MALLOC_FAILED();
    for(;;) {
        c = fgetc(file);
        if (c==EOF)
            return 0;
        if (len==allocated) {
            allocated+=100;
            tmp = (char*)realloc(tmp, allocated*sizeof(char));
        }
        tmp[len]=c;
        len++;
        if (c==']')
            break;
    }
    if (len==allocated) {
        allocated+=1;
        tmp = (char*)realloc(tmp, allocated*sizeof(char));
    }
    tmp[len]='\0';
    int ret=mpfq_2_89_vec_sscan(K,w,n,tmp);
    free(tmp);
    return ret;
}

/* *Mpfq::defaults::vec::alloc::code_for_vec_ur_init, Mpfq::defaults::vec, Mpfq::defaults */
void mpfq_2_89_vec_ur_init(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_vec_ur * v, unsigned int n)
{
    unsigned int i;
    *v = (mpfq_2_89_vec_ur) malloc (n*sizeof(mpfq_2_89_elt_ur));
    for(i = 0; i < n; i+=1)
        mpfq_2_89_elt_ur_init(K, &( (*v)[i]));
}

/* *Mpfq::defaults::vec::alloc::code_for_vec_ur_reinit, Mpfq::defaults::vec, Mpfq::defaults */
void mpfq_2_89_vec_ur_reinit(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_vec_ur * v, unsigned int n, unsigned int m)
{
    if (n < m) { // increase size
        *v = (mpfq_2_89_vec_ur) realloc (*v, m * sizeof(mpfq_2_89_elt_ur));
        unsigned int i;
        for(i = n; i < m; i+=1)
            mpfq_2_89_elt_ur_init(K, (*v) + i);
    } else if (m < n) { // decrease size
        unsigned int i;
        for(i = m; i < n; i+=1)
            mpfq_2_89_elt_ur_clear(K, (*v) + i);
        *v = (mpfq_2_89_vec_ur) realloc (*v, m * sizeof(mpfq_2_89_elt_ur));
    }
}

/* *Mpfq::defaults::vec::alloc::code_for_vec_ur_clear, Mpfq::defaults::vec, Mpfq::defaults */
void mpfq_2_89_vec_ur_clear(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_vec_ur * v, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; i+=1)
        mpfq_2_89_elt_ur_clear(K, &( (*v)[i]));
    free(*v);
}


/* Polynomial functions */
/* *Mpfq::defaults::poly::code_for_poly_setmonic */
void mpfq_2_89_poly_setmonic(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_poly q, mpfq_2_89_src_poly p)
{
    long degp = mpfq_2_89_poly_deg(K, p);
    if (degp == -1) {
        q->size = 0;
        return;
    }
    if (degp == 0) {
        mpfq_2_89_elt aux;
        mpfq_2_89_init(K, &aux);
        mpfq_2_89_set_ui(K, aux, 1);
        mpfq_2_89_poly_setcoef(K, q, aux, 0);
        mpfq_2_89_clear(K, &aux);
        q->size = 1;
        return;
    }
    mpfq_2_89_elt lc;
    mpfq_2_89_init(K, &lc);
    mpfq_2_89_poly_getcoef(K, lc, p, degp);
    mpfq_2_89_inv(K, lc, lc);
    mpfq_2_89_poly_setcoef_ui(K, q, 1, degp);
    mpfq_2_89_vec_scal_mul(K, q->c, p->c, lc, degp);
    q->size = degp+1;
    mpfq_2_89_clear(K, &lc);
}

/* *Mpfq::defaults::poly::code_for_poly_divmod */
void mpfq_2_89_poly_divmod(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_poly q, mpfq_2_89_dst_poly r, mpfq_2_89_src_poly a, mpfq_2_89_src_poly b)
{
    if (b->size == 0) {
        fprintf(stderr, "Error: division by 0\n");
        exit(1);
    }
    if (a->size == 0) {
        q->size = 0; r->size = 0;
        return;
    }
    int dega = mpfq_2_89_poly_deg(K, a);
    if (dega<0) {
        q->size = 0; r->size = 0;
        return;
    }
    // Compute deg b and inverse of leading coef
    int degb = mpfq_2_89_poly_deg(K, b);
    if (degb<0) {
        fprintf(stderr, "Error: division by 0\n");
        exit(1);
    }
    if (degb > dega) {
        q->size=0;
        mpfq_2_89_poly_set(K, r, a);
        return;
    }
    int bmonic;
    mpfq_2_89_elt ilb;
    mpfq_2_89_init(K, &ilb);
    if (mpfq_2_89_cmp_ui(K, (b->c)[degb], 1) == 0) {
        mpfq_2_89_set_ui(K, ilb, 1);
        bmonic = 1;
    } else {
        mpfq_2_89_inv(K, ilb, (b->c)[degb]);
        bmonic = 0;
    }
    
    mpfq_2_89_poly qq, rr;
    mpfq_2_89_poly_init(K, qq, dega-degb+1);
    mpfq_2_89_poly_init(K, rr, dega);
    
    mpfq_2_89_poly_set(K, rr, a);
    mpfq_2_89_elt aux, aux2;
    
    mpfq_2_89_init(K, &aux);
    mpfq_2_89_init(K, &aux2);
    
    int i;
    int j;
    for (i = dega; i >= (int)degb; --i) {
        mpfq_2_89_poly_getcoef(K, aux, rr, i);
        if (!bmonic) 
            mpfq_2_89_mul(K, aux, aux, ilb);
        mpfq_2_89_poly_setcoef(K, qq, aux, i-degb);
        for (j = i-1; j >= (int)(i - degb); --j) {
            mpfq_2_89_mul(K, aux2, aux, (b->c)[j-i+degb]);
            mpfq_2_89_sub(K, (rr->c)[j], (rr->c)[j], aux2);
        }
    }    
    
    rr->size = degb;
    int degr = mpfq_2_89_poly_deg(K, rr);
    rr->size = degr+1;
    
    if (q != NULL) 
        mpfq_2_89_poly_set(K, q, qq);
    if (r != NULL)
        mpfq_2_89_poly_set(K, r, rr);
    mpfq_2_89_clear(K, &aux);
    mpfq_2_89_clear(K, &aux2);
    mpfq_2_89_poly_clear(K, rr);
    mpfq_2_89_poly_clear(K, qq);
}

static void mpfq_2_89_poly_preinv(mpfq_2_89_dst_field, mpfq_2_89_dst_poly, mpfq_2_89_src_poly, unsigned int);
static /* *Mpfq::defaults::poly::code_for_poly_precomp_mod */
void mpfq_2_89_poly_preinv(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_poly q, mpfq_2_89_src_poly p, unsigned int n)
{
    // Compute the inverse of p(x) modulo x^n
    // Newton iteration: x_{n+1} = x_n + x_n(1 - a*x_n)
    // Requires p(0) = 1
    // Assume p != q (no alias)
    assert (mpfq_2_89_cmp_ui(K, p->c[0], 1) == 0);
    assert (p != q);
    int m;
    if (n <= 2) {
        mpfq_2_89_poly_setcoef_ui(K, q, 1, 0);
        q->size = 1;
        m = 1;
        if (n == 1)
            return;
    } else {
        // n >= 3: recursive call at prec m = ceil(n/2)
        m = 1 + ((n-1)/2);
        mpfq_2_89_poly_preinv(K, q, p, m);
    }
    // enlarge q if necessary
    if (q->alloc < n) {
        mpfq_2_89_vec_reinit(K, &(q->c), q->alloc, n);
        q->alloc = n;
    }
    // refine value
    mpfq_2_89_vec tmp;
    mpfq_2_89_vec_init(K, &tmp, m+n-1);
    
    mpfq_2_89_vec_conv(K, tmp, p->c, MIN(n, p->size), q->c, m);
    int nn = MIN(n, MIN(n, p->size) + m -1);
    mpfq_2_89_vec_neg(K, tmp, tmp, nn);
    mpfq_2_89_add_ui(K, tmp[0], tmp[0], 1);
    mpfq_2_89_vec_conv(K, tmp, q->c, m, tmp, nn);
    mpfq_2_89_vec_set(K, q->c + m, tmp + m, n-m);
    q->size = n;
    
    mpfq_2_89_vec_clear(K, &tmp, m+n-1);
}

/* *Mpfq::defaults::poly::code_for_poly_precomp_mod */
void mpfq_2_89_poly_precomp_mod(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_poly q, mpfq_2_89_src_poly p)
{
    assert(p != q);
    int N = mpfq_2_89_poly_deg(K, p);
    mpfq_2_89_poly rp;
    mpfq_2_89_poly_init(K, rp, N+1);
    mpfq_2_89_vec_rev(K, rp->c, p->c, N+1);
    rp->size = N+1;
    mpfq_2_89_poly_preinv(K, q, rp, N);
    mpfq_2_89_poly_clear(K, rp);
}

/* *Mpfq::defaults::poly::code_for_poly_mod_pre */
void mpfq_2_89_poly_mod_pre(mpfq_2_89_dst_field K MAYBE_UNUSED, mpfq_2_89_dst_poly r, mpfq_2_89_src_poly q, mpfq_2_89_src_poly p, mpfq_2_89_src_poly irp)
{
    int N = mpfq_2_89_poly_deg(K, p);
    int degq = mpfq_2_89_poly_deg(K, q);
    if (degq < N) {
        mpfq_2_89_poly_set(K, r, q);
        return;
    }
    int m = degq - N;
    assert (degq <= 2*N-2);
    mpfq_2_89_poly revq;
    mpfq_2_89_poly_init(K, revq, MAX(degq+1, m+1));
    mpfq_2_89_vec_rev(K, revq->c, q->c, degq+1);
    revq->size = q->size;
    mpfq_2_89_poly_mul(K, revq, revq, irp);
    mpfq_2_89_vec_rev(K, revq->c, revq->c, m+1);
    revq->size = m+1;
    
    mpfq_2_89_poly_mul(K, revq, revq, p);
    mpfq_2_89_poly_sub(K, r, q, revq);
    r->size = mpfq_2_89_poly_deg(K, r)+1;
    mpfq_2_89_poly_clear(K, revq);
}


/* vim:set ft=cpp: */
