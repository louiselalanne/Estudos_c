#include <stdio.h>
#include <stdlib.h>

void *malloc_s(size_t size){
  
  void *ptr;
  ptr=malloc(size);
  
  if (ptr==NULL){
    fprintf(stderr, "memória insuficiente\n");
    exit(1);
  }
  return ptr;
}

int main(int argc, char *argv[]){
  //alocação dinâmica de memória
  int *p;

  p=malloc_s(sizeof(int));

  *p=9;

  printf("%d\n",*p);
  
  free(p);

  return 0;
}
