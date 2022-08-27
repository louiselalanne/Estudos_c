#include <stdio.h>

void funcao(void){
  static int i=0; //auto, static, register

  printf("%d\n",i++);
}

int main(void){

  funcao();
  funcao();
  funcao();
  return 0;
}
