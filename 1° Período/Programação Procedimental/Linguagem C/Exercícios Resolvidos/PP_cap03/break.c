// Programa - break.c
// Autor: Fulano C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos
   int limite;
   int i;
   char op;
 
   printf ("Contar ate : ");
   scanf ("%d", &limite);
 
   i = 1;
   while (i <= limite)
   {
      printf("\n%d", i++);
 
      printf("\nTermina (S/N)?");
      fflush(stdin);
      scanf("%c", &op); 
 
      if (op == 's' || op == 'S') /* Se for respondindo sim... */
      {
         break;  /* ... interrompe a execu��o */
      }
   }
   printf("\nContagem Encerrada"); /* ...desviando o programaa pr�xima instru��o depois do } (fecha chaves) do while */
	getch();

   return 0;
}
