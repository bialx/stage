EXE = test
CFLAGS = -std=c99 -pedantic -mavx2 -g


AVX2_INCLUDE:=-I ../

.PHONY: test clean

test: $(EXE)

$(EXE): test.o ../ffi_elt_avx2.o
		$(CC) $(CFLAGS) -o $@ $^

test.o: test.c ../ffi_elt.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o $(EXE) *.txt *.py
	cd ../ ; make clean ; cd test
