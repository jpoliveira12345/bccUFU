// Programa - nomearquivo.c
// Autor: Claudio C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos

	int n;
	do{
	printf("\nDigite um n�mero:");
	scanf("%d",&n);
	switch(n){
		case 1:putchar('A');
		 break;
		case 3:putchar('B');
		case 4:putchar('C');break;
		default: putchar('*');
		case 5:putchar('D');
		case 9:printf("Saindo...\n");
	}
	putchar('.');
	}while(n!=9);
	getchar();
	return 0;
}
