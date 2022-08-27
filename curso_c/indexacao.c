#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]){
  int i;

  printf("Endereço de i: %p\ntamanho de i; %zu\n", &i, sizeof i);

  int *p=NULL;
  printf("endereço de p:%p\ntamanho de p: %zu\n",&p, sizeof p);
  
  p=&i;
  i=9;

  printf("*p:%d\n",p);
  
  printf("-------------------\n\n");
  
  int *j = NULL;
  j = malloc(sizeof(int)); //memory allocation
  *j=9;

  printf("j: %d\n",j);
  free(j); //liberar a memória
    
  return 0;
}
