#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void erro(char *msg){
  fprintf(stderr, "%s\n", msg);
  exit(1);
}

bool ispe(const unsigned char *b){
	return(b[0]=='M' && b[1]=='Z');
}


int main (int argc, char *argv[]){
  FILE *ar;
  unsigned char buffer[32];

  if(argc !=2)
    erro("\tModo de Uso: ./readpe <arquivo.exe>\n");
  
  ar = fopen(argv[1], "rb");

  if(ar==NULL)
    erro("Arquivo não encontrado ou sem permissão de leitura");

  if (fread(buffer, 32, 1, ar) != 1)
    erro("Não foi possível ler o arquivo");

  fclose(ar);

	if (!ispe(buffer))
		erro("O arquivo não é um executável PE.");

  return 0;
}
