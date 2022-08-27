#include <stdio.h>

int main(void){
  char c;

  printf("o tamanho de c(char): %lu bytes ou %lu bits\n",sizeof c, sizeof c*8);
  
  c=129;
  printf("Valor de c: %i\n", c);

  return 0;
}
