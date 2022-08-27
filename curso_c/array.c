#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
  long int c[3];

  printf("%zu\n", sizeof c);
  printf("%zu\n", sizeof c / sizeof c[0]);
  
  c[0]='A';
  c[1]=0x42;
  c[2]=67;

  printf("o elemento 0 de c é: %c\n", c[0]);
  printf("o elemento 1 de c é: %c\n", c[1]);
  printf("o elemento 2 de c é: %c\n", c[2]);

  printf("O endereço do array c em memória: %p\n", c);
  printf("O endereço do array &c em memória: %p\n", &c);
  printf("O endereço do 1o elemento do array c em memória: %p\n", &c[0]);
  printf("O endereço do 2o elemento do array c em memória: %p\n", &c[1]);
  
  return 0;
}
