// Programa - mdc2.c
// Autor: Claudio C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos

	int x, y, r;
	printf("Calculo do Maior Divisor Comun\n");
	printf("mdc(x,y) ? \n");
	printf("Digite dois valores inteiros: ");
	scanf ("%d %d", &x, &y);
	printf("mdc(%d,%d): ",x,y);
	if(y==0) {
		printf("nao realizavel...\n");
	} else {
		do {
			r = x % y;
			x = y;
			y = r;
		}while(r != 0);
		printf ("%d\n", x);
	}
	getch();
   return 0;
}
