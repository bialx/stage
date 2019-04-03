#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../ffi_elt.h"
#define BUFFER_SIZE 64
#define DIFF_INPUT 1

/* a in F_{2^m}, deg(a) < 64 ? DIFF_INPUT = 0 : DIFF_INPUT = 1
  Squaring works up to deg = 479
  Square root works up to deg = 118
*/


/* allocate an array composed of size __m128 vector filled with 0  */
__m128i* malloc_m128(__m128i *output_square_c, int size){
  output_square_c = malloc(size * sizeof(__m128i));
  if(output_square_c == NULL) exit(0);
  for(int i = 0; i < size; i++){
    output_square_c[i] = _mm_setzero_si128();
  }
  return output_square_c;
}




int main() {

  /* DATA USED : input/output are read from files *.txt (pointed by f), output_*_c are read from the avx2 function
                 ptr used in arg of strtoull (not used), ret return the %llu conversion of the string line read in *.txt file
                check -> count number of errors, choice = {0,1} -> {input,output}, size_i and size_o are the size of in-output
                we increase i to fill the array -> input[i] = ret ; output[i] = ret when we are reading the file
               buffer is used to store the line we are currently reading in the file
               shift used when filling the array output to ensure the first elt is 0 is odd number of input
   Files follow this structure : - mean the exemple is over
          ? nbr_of Input
            input1
            intpu2
            ...
          ! nbr_of_output
            output1
            output2
            ...
          -
  */

  FILE* f = NULL;
  char *ptr;
  char buffer[BUFFER_SIZE] = "";
  uint64_t *input = NULL;
  uint64_t *output = NULL;
  uint64_t *output_root_c = NULL;
  __m128i *output_square_c = NULL;
  uint64_t ret;
  int check = 0;
  int choice;
  int i;
  int size_i;
  int size_o;
  int shift;

/* CHECK if we have the same result with our squaring function using AVX2 and the expected computation using SAGE */
  f = fopen("squaring.txt", "r+");
  if (f != NULL){
    while(fgets(buffer, BUFFER_SIZE, f) != NULL){
      ret = strtoull(buffer, &ptr, 10);     // Convert the string line read from text file into long long unsigned int

      /* Working with Input*/
      if(buffer[0] == '?'){
        choice = 0;
        size_i = buffer[1] - 48;      // 48 = 0 in ASCII -> int
        size_i = size_i + size_i % 2;    // ensure we have an even number of input, anyway the input we add is 0
        i = 0;

        /* Allocate the array of lenght size_i with uin64_t type and fill it with 0*/
        input = malloc((size_i) * sizeof(uint64_t));
        if(input == NULL) exit(0);
        for(int j = 0; j < size_i; j++){
          input[j] = 0;
        }

        /* allocate an array composed of size_i __m128 vector filled with 0, __m128 is on 128bits so we only need size_i elements*/
        output_square_c = malloc_m128(output_square_c, size_i);
        continue;     //we handled the allocation of input, now we can go to next line and fill input with the next lines
      }

      /* Working with Output*/
      if(buffer[0] == '!'){
        choice = 1;
        size_o = buffer[1] - 48;
        shift = size_o;
        size_o = size_o + size_o % 2;

        i = 0;        // set i to 0, we filled input[i] for i=0 to size_i - 1, so now we need to fill output[i]

        /* Allocate the array of lenght size_o with uin64_t type and fill it with 0*/
        output = malloc(size_o * sizeof(uint64_t));
        for(int j = 0; j < size_o; j++){
            output[j] = 0;
          }
        if(output == NULL) exit(0);
        continue;     //we handled the allocation of output, now we can go to next line and fill output with the next lines
      }


      /* We've reached the end of the example, need to compute our avx2 functions, compare with output in file and free the memory */
      if(buffer[0] == '-'){
        square(output_square_c, input, size_i);

        /* Note : for deg < 64 : j <= size_o / 2 - 1 else size_o / 2
           Compare output from avx2 and output from file */
        for(int j = 0; j <= size_o / 2 - DIFF_INPUT; j++){
          int k = 2*j + 1;
          if((output[k-1] != output_square_c[j][1]) | (output[k] != output_square_c[j][0])){
            check++;
          }
        }

        /* Free memory for the next example */
        free(input);
        free(output);
        free(output_square_c);
        i = 0;
        continue;
      }

      /* Input are handled with choice = 0 and output with choice = 1  */
      if((choice == 0) && ((buffer[0] != '?') | (buffer[0] != '!') | (buffer[0] != '-')) ){
        input[i] = (uint64_t) ret;
        i++;
      }
      if(choice == 1 && ((buffer[0] != '?') | (buffer[0] != '!') | (buffer[0] != '-'))){
        output[i+(1*shift%2)] = (uint64_t) ret;     // In case odd size_o output[0] = 0 so we start at output[1]
        i++;
      }
  }

  /* Display the result, check is increased when we have an error, so check != 0 mean smth wrong */
  printf("\n#### CHECKING SQUARING ####\n");
  if(!check) printf("\n##########\nSUCCES BOY\n##########\n");
  if(check) printf("\nWe've failed -> %d\n", check);
  fclose(f);
  }
  else{
    printf("can't open file squaring.txt");
  }



  /* CHECK if we have the same result with our square_root function using AVX2 and the expected computation using SAGE */
  f = fopen("square_root.txt", "r+");
  if (f != NULL){
    check = 0;
    while(fgets(buffer, BUFFER_SIZE, f) != NULL){
      ret = strtoull(buffer, &ptr, 10);

      /* INPUT */
      if(buffer[0] == '?'){
        choice = 0;
        size_i = buffer[1] - 48;
        size_i = size_i + size_i % 2;
        i = 0;
        input = malloc(size_i * sizeof(uint64_t));
        if(input == NULL) exit(0);
        for(int j = 0; j < size_i; j++){
          input[j] = 0;
        }
        continue;
      }

      /* OUTPUT */
      if(buffer[0] == '!'){
       choice = 1;
       size_o = buffer[1] - 48;
       i = 0;
       output = malloc(size_o * sizeof(uint64_t));
       output_root_c = malloc(size_o * sizeof(uint64_t));
       if((output == NULL) || (output_root_c == NULL)) exit(0);
       for(int j = 0; j < size_o; j++){
         output[j] = 0;
         output_root_c[j] = 0;
       }
      continue;
      }

      /* END OF THE EXAMPLE */
      if(buffer[0] == '-'){
        square_root(output_root_c, input, size_i);
        for(int j = 0; j < size_o; j++){
          if(output[j] != output_root_c[j]){
            (check)++;
          }
        }
        free(input);
        free(output);
        free(output_root_c);
        i = 0;
        continue;
      }

      /* HANDLE INPUT/OUTPUT */
      if((choice == 0) && ((buffer[0] != '?') | (buffer[0] != '!') | (buffer[0] != '-')) ){
        input[i] = (uint64_t) ret;
        i++;
      }
      if(choice == 1 && ((buffer[0] != '?') | (buffer[0] != '!') | (buffer[0] != '-'))){
        output[i] = (uint64_t) ret;
        i++;
      }
    }

      /* DISPLAY INFO */
      printf("\n#### CHECKING SQUARE ROOT ####\n");
      if(!check) printf("\n##########\nSUCCES BOY\n##########\n");
      if(check) printf("\nWe've failed -> %d\n", check);
      fclose(f);
    }
    else{
      printf("can't open file square_root.txt");
    }
  return 0;
}
