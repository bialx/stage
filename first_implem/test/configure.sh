#! /bin/sh

echo "\n[*] Call ./configure degree nbr_test, where degree is the degree of a random polynomial we wanna test, and nbr_test is the number of test to check if our functions are right"

echo "\n[*]Cleaning all compilation files in first_implem/ and first_implem/test -- Cleaning all text files in first_implem/test"
make clean

# echo "\n[*]Build main.avx2.c"
# cd ../ ; make a ; cd test

echo "\n[*]Creating text files square_root.txt squaring.txt"
touch square_root.txt squaring.txt

echo "\n[*]Generating set of examples and writing them in *.txt"
sage generator_input_poly.sage $1 $2

echo "\n[*]Build test.c and run it"
make test ; ./test

echo "\n Number of tests runned --> $2"
echo "\n Polynomials of degree --> $1"
