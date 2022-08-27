#include <stdio.h>
#include <string.h>

struct st2 {
  int a;
  int b;
  int c;
};

union st {
  unsigned char id;
  unsigned int num;
  struct st2 s2;
};

int main(void){
  union st s;
  
  s.num=2022;

  //diminuiu 4 bytes para o último numero
  s.id=0xe2;

  printf("s.num: %d\n", s.num);
  printf("s.id: %d\n", s.id);
  printf("sizeof(union st): %d\n", sizeof(union st));

  return 0;
}
