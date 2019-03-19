EXE1 = c
EXE2 = a
CFLAGS = -O3 -std=c99 -pedantic

MPFQ_SRC:=../lib/mpfq/src
MPFQ_INCLUDE:=-I ../lib/mpfq/include
MPFQ_FIELD:=2_89

LIB = $(MPFQ_INCLUDE)
LIB_OBJS:=libmpfq_$(MPFQ_FIELD).a

.PHONY: c a clean help

c99: $(EXE1)
avx: $(EXE2)

$(EXE1): main_c99.o ffi_elt_c99.o
	$(CC) $(CFLAGS) -o $@ $^

$(EXE2): main_avx2.o
	$(CC) $(CFLAGS) -o $@ $^

main_c99.o: main_c99.c ffi_elt.h
	$(CC) $(CFLAGS) -c $< $(LIB)

main_avx2.o: main_avx2.c ffi_elt.h
	$(CC) $(CFLAGS) -c $< $(LIB)

ffi_elt_c99.o: ffi_elt_c99.c ffi_elt.h
	$(CC) $(CFLAGS) -c $< $(LIB)





clean:
	rm -f *.o $(EXE1) $(EXE2)


help:
	@echo "Usage:"
	@echo "make c -> build with type uint64"
	@echo "make a -> build with type avx"
	@echo "make clean -> remove files produced by make"
	@echo "make help -> display this help"
