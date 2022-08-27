#include <stdio.h>

//#define MSG "Mensagem padrão"
//#define SIZ 512

#define QUAD(x) (x*x)
#define MAX(x,y) (x>y? x : y)
#define MAX3(x,y,z) \
  (MAX (MAX(x,y), MAX(y,z)))

#define DEBUG
//#undef DEBUG
//__DATE__, __TIME__
#define VAR(x) printf("A variável"#x" tem valor: %d\n",x)



int main (void){

  int contador =90;

  printf("O quadrado de 8 é: %d \n", QUAD(8));
  printf("O maior é: %d \n", MAX(3,9));
  printf("O maior é: %d \n", MAX3(3,9,41));

#ifdef DEBUG
  VAR(contador);
  printf("Estou na linha %d\n", __LINE__);
#endif


  /*char buff[SIZ]={'\0'};

  printf("Digite algo: ");
  scanf("%s", &buff);

  printf("Você digitou: %s\n", buff);
  
  printf("%s\n", MSG);
  */

  return 0;
}



/*
 * para buscar onde as macros estão definidas
 * grep 'define NULL' /usr/include/*h
*/
