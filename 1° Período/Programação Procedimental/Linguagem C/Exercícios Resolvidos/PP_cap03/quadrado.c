// Programa - quadrado.c
// Autor: Fulano C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos
	unsigned int n, i, j, quad=0;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%u",&n);
	for(i=0;i<n;i++) quad += 2*i+1;
	
	printf("%d ao quadrado eh igual a %d\n",n,quad);
	
	getch();

   return 0;
}
