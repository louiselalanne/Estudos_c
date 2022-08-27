#include <stdio.h>
#include <string.h>

struct st {
  unsigned char id[5];
  unsigned int num;
};

int main(void){
  struct st s;
  
  s.id[3]=0x41;
  s.id[2]=0x90;
  s.num=2022;
  
  printf("s.num: %d\n", s.num);
 
  memset(&s, 0, sizeof(struct st));
 
  printf("s.num: %d\n", s.num);
  printf("s.id: %d\n", s.id[3]);
  printf("sizeof(struct st): %d\n", sizeof(struct st));

  return 0;
}
