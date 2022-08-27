#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
  float f = 3e2; //3*10²

  printf("O tamanho de f: %zu bytes / %zu bits \n", sizeof f, sizeof f *8);
  printf("Valor de f: %.2f\n", f);

  return 0;
}
