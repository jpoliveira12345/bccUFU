// Programa - nomearquivo.c
// Autor: Claudio C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos
	int up, down;
	for (up = 0, down=10; up <= down; up++, down--)
	{
	printf("up = %d, down= %d\n",up,down);
	}
	getch();
     return 0;
}
