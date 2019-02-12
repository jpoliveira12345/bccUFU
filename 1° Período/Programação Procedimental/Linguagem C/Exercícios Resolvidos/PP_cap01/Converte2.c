/****
 *
 * Exemplo: Converte2.c
 *
 * Cap�tulo: 1
 * Demonstra: Convers�o de atribui��o.
 *
 ****/

#include <stdio.h>

int main(void)
{
   double d = 4.1021456789654;
   float  f;

   f = d;

   printf("d = %20.18lf\nf = %20.18f\n", d, f);

   getchar();
   return 0;
}

/* Resultado:

	d = 4.102145678965399600
	f = 4.102145671844482400

*/
