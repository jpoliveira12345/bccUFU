// Programa - nomearquivo.c
// Autor: Claudio C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos
	int i, j;
	
	for(i=1;i<=10;i++) {
		for(j=1;j<=10;j++)
		  printf("%3d",i*j);
		printf("\n");
	}
	
	getch();
	

   return 0;
}
