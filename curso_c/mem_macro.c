#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(ptr, size){ \
  ptr = malloc(size);\
  if(ptr == NULL){\
    fprintf(stderr, "memória insuficiente\n");\
    exit(1);\
  }\
}

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
  int *p,i;

  MALLOC(p, 5* sizeof(int));

  //zerar a mem
  memset(p,0,5*sizeof(int));

  *p=9;
  *(p+1)=43;
  *(p+2)=65;
  *(p+3)=11;
  *(p+4)=23;

  for(i=0;i<6;i++){
    printf("%d\n",*(p+i));
  }

  p=realloc(p, sizeof(int)*6);
  *(p+5)=20;
  
  free(p);

  return 0;

}
