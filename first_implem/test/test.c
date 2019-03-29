#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../ffi_elt.h"
#define BUFFER_SIZE 65


__m128i* malloc_m128(__m128i *output_square_c, int size){
  output_square_c = malloc(size * sizeof(__m128i));
  if(output_square_c == NULL) exit(0);
  for(int i = 0; i < size; i++){
    output_square_c[i] = _mm_setzero_si128();
  }
  return output_square_c;
}

int main() {
  FILE* f_square = NULL;
  // FILE* f_root = NULL;
  char *ptr;
  char buffer[BUFFER_SIZE] = "";
  uint64_t *input_square = NULL;
  uint64_t *output_square = NULL;
  // uint64_t *input_root = NULL;
  // uint64_t *output_root = NULL;
  __m128i *output_square_c = NULL;
  int check = 0;
  int choice;
  int i;
  long ret;
  int size_i;
  int size_o;

  f_square = fopen("squaring.txt", "r+");
  if (f_square != NULL){
    while(fgets(buffer, BUFFER_SIZE, f_square) != NULL){
      ret = strtol(buffer, &ptr, 10);
      if(buffer[0] == '?'){
        choice = 0;
        size_i = buffer[1] - 48;
        i = 0;
        if(size_i % 2 == 0 ){
          input_square = malloc(size_i * sizeof(uint64_t));
        }
        if(size_i % 2 == 1 ){
          size_i++;
          input_square = malloc((size_i) * sizeof(uint64_t));
        }

        if(input_square == NULL) exit(0);
        for(int j = 0; j < size_i; j++){
          input_square[j] = 0;
        }
        output_square_c = malloc_m128(output_square_c, size_i);
        continue;
      }
      if(buffer[0] == '!'){
        choice = 1;
        size_o = buffer[1] - 48;
        i = 0;
        if(size_o % 2 == 0 ){
          output_square = malloc(size_o * sizeof(uint64_t));
          for(int j = 0; j < size_o; j++){
            output_square[j] = 0;
          }
        }
        if(size_o % 2 == 1 ){
          output_square = malloc((size_o+1) * sizeof(uint64_t));
          for(int j = 0; j < size_o+1; j++){
            output_square[j] = 0;
          }
        }
        if(output_square == NULL) exit(0);
        continue;
      }

      if(choice == 0){
        // printf("MARCHE");
        input_square[i] = (uint64_t) ret;
        i++;
      }
      if(choice == 1){
        // printf("MARCHE");
        output_square[i+(1*(size_o%2))] = (uint64_t) ret;
        i++;
      }

      if(buffer[0] == '-'){
        printf("SIZE -> %d %d\n", size_i, (size_o + size_o%2));
        square(output_square_c, input_square, size_i);
        /* DISPLAY RESULT */
        for(int j = 0; j < size_i; j++){
         printf("input read from txt file -> %lu\n", input_square[j]);
       }
        for(int j = 0; j < (size_o + size_o%2); j++){
         printf("output read from txt file -> %lu\n", output_square[j]);
        }
        for(int j = 0; j < size_i; j++){
         for(int k = 0; k < 2; k++){
           printf("j , k = %d, %d\n", j,k);
           printf("output function square -> %llu\n", output_square_c[j][k]);
         }
       }
       /* END DISPLAY */

        for(int j = 0; j < size_i; j+=2){
          if((output_square[j] != output_square_c[j][1]) | (output_square[j+1] != output_square_c[j][0])){
            printf("CHECK -->%ld %lld %ld %lld\n",output_square[j],output_square_c[j][1],output_square[j+1],output_square_c[j][0]);
            check++;
          }
        }
        free(input_square);
        free(output_square);
        free(output_square_c);
        i = 0;
        continue;
      }
  }


  if(check == 0) printf("SUCCES BOY\n");
  if(check != 0) printf("We've failed\n");
  fclose(f_square);
  }
  else{
    printf("can't open file squaring.txt");
  }


  // f_root = fopen("square_root.txt", "r+");
  // if (f_root != NULL){
  //
  //
  //
  //   fclose(f_root);
  // }
  // else{
  //   printf("can't open file square_root.txt");
  // }

  return 0;
}
