#include <stdio.h>

int imprime(char *s){
  while(*s)//while s != 0
    putchar(*s++);
}


int main(void){

  int a[]={2017, 2018, 2019, 2020};
  int i = 2022;
  int *p;

  char s[]="Louis";
  char *t = "Lane";
  char u[]= {0x6c, 0x6f, 0x75, 0x69, 0x73, 0x65, '\n', 0x00};

  puts(s);
  puts(t);
 // puts(u);

  printf("%d\n", *a+1);
  p = &i;
  printf("O endereço da variável em memória é %p\n", p);
  printf("O endereço da variável em memória é %p\n", &i);
  printf("O valor de i é: %d\n", *p);

  printf("-----------\n");
  
  imprime(u);
  return 0;

}
