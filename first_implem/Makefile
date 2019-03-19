EXE1 = c99
EXE2 = avx
CFLAGS = -O3 -std=c99 -pedantic

.PHONY: all clean help

c99: $(EXE1)
avx: $(EXE2)

$(EXE1): main_c99.o
	$(CC) $(CFLAGS) -o $@ $^

main_c99.o: main_c99.c ffi_elt.h
	$(CC) $(CFLAGS) -c $<

$(EXE2): main_avx2.o
	$(CC) $(CFLAGS) -o $@ $^

main_avx2.o: main_avx2.c ffi_elt.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o $(EXE1) $(EXE2)


help:
	@echo "Usage:"
	@echo "make c99 build with type uint64"
	@echo "make avx build with type avx"
	@echo "make clean remove files produced by make"
	@echo "make help display this help"
