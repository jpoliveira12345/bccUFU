// Programa - nomearquivo.c
// Autor: Fulano C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos
   int i;
 
   for (i=1; i < 30; i++) /* de 1 at� 29 */
   {
      if (i > 10 &&  i < 20) /* se a vari�vel estiver entre 11 e 19... */
      {
         continue; /* ...desvia para a condi��o inicial */
      }
      printf ("%d\n", i); /* ...sen�o mostra o n�mero na tela */
   }

	getch();
   return 0;
}
