// Programa - heron.c
// Autor: Claudio C. Rodrigues
// Data: dd/mm/aaaa
// Este programa calcula a raiz quadrada de um n�mero 
// pelo metodo de heron

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos
   float fK, fN;
   int iI;
 
   printf("Entre com o valor de N:");
   scanf("%f", &fN);
 
   fK = 1;
   for( iI = 1; iI <= 12; iI++)
   {
      fK = (fK + (fN/fK))/2;
      printf("\nI = %d e K = %f", iI, fK);
   }
	getch();

   return 0;
}
