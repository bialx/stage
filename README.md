# Implementation of squaring / square root of an element en F_2^m


TREE OF THE PROJECT
------------


    /first_implem/
            /ffi_elt_avx2.c
            /ffi_elt_c99.c
            /main_avx2.c
            /main_c99.c
            /ffi_elt.h
            /Makefile
            /test/
                /configure.sh
                /generator_input_poly.Usage
                /test.c
                /Makefile


FUNCTIONS
------------

ffi_elt_c99, main_c99.c: implement squaring / square root only using type uint64_t, I kinda skipped this part to implement avx2 versions instead                              as the algorithm used are heavily based on registers manipulation


ffi_elt_avx2, main_avx2.c: implement squaring / square root only using type __m128i and intel intrinsic


ffi_elt.h: contains prototype/structure of the above functions


Makefile: Compile main_c99 and main_avx2.

          Run : -> make help to display help

                -> make a to compile main_avx2

                -> make c to compile main_c99

                -> make clean to clean it all



/tmp/ :

generator_input_poly.sage: generate random input and output for square/ssquare_root for a given size (size -> degree of the field element as a polynomial)

test.c: functions used to test if our implementation of square/square root are functional

Makefile: build test.c using ../ffi_elt_avx2 ../ffi_elt.h

configure: use this to run all the test. It will:

    -> clean all files produced during compilation of main_avx2.c and test.c

    -> create tempory files square_root.txt squaring.txt in which generator_input_poly.sage writes different input/output

    -> finally build test.c
