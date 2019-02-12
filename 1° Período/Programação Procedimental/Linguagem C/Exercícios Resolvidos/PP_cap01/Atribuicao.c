/****
 *
 * Exemplo: Atribuicao.c
 *
 * Cap�tulo: 1
 * Demonstra: atribui��es m�ltiplas e convers�o de atribui��o
 *
 ****/

#include <stdio.h>

int main()
{
   float x;
   int y;

   x = y = 3.9;
   printf("\nx = y = 3.9\n");
   printf("x = %f \t y = %d \n", x, y);

   y = x = 3.9;
   printf("\ny = x = 3.9\n");
   printf("x = %f \t y = %d \n", x, y);

   return 0;
}

