#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
  register int i=0;

  printf("O tamanho de i: %zu bytes / %zu bits \n", sizeof i, sizeof i *8);
  printf("Valor de i: %d\n", i);

  return 0;
}
