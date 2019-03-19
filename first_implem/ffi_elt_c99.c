#include "ffi_elt.h"


/**
 * \fn void ffi_elt_add(fffi_elt o, ffi_elt e1, ffi_elt e2)
 * \brief This functions adds two field element
 *
 * \param[out] o e1 + e2
 * \param[in] e1 uint64_t
 * \param[in] v2 uint64_t
 */
ffi_elt ffi_elt_add(ffi_elt o, ffi_elt e1, ffi_elt e2){
  o = e1 ^ e2;
  return o;
}


ffi_elt ffi_elt_sqr(ffi_elt *o, ffi_elt *e1, int size){

  ffi_elt tmp1, tmp2, tmp3;
  ffi_elt tab[16] = {0,1,4,5,16,17,21,20,64,65,68,69,80,81,85,84};
  ffi_elt mask = 0;

  for(int i = 0; i < size / 2; ++i){
    tmp1 = e1[2*i];
    tmp2 = tmp1 ^ mask;
    tmp3 = (tmp1 >> 4) ^ mask;

  }
}
