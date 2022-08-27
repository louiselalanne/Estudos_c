#include <stdio.h>

int main(void){
  unsigned int i =0;

  for ( ;i<3; ){
    printf("o valor de i é: %u\n",i);
    i++;
  }


/*imprimir: //label
  printf("O valor de i é: %u\n",i);
  i++;
  if (i<3)
    goto imprimir;
*/
  return 0;
}
