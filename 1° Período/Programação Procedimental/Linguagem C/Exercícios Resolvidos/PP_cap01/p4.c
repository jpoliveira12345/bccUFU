// Programa - nome
// Autor: Claudio C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <math.h>  // necess�ria para pow() e sqrt()
#include <stdio.h> // necess�ria para printf()
 
int main()
{
   int a = 2, b = 3;
 
   printf("%d + %d = %d\n", a, b, a + b);
   printf("%d - %d = %d\n", a, b, a - b);
   printf("%d x %d = %d\n", a, b, a * b);
   printf("%d / %d = %0.1f\n", a, b, (float) a / b); // resultado fracion�rio
   printf("%d elevado a %d = %0.1f\n", a, b, pow(a, b)); // pow(base, expoente)
   printf("raiz quadrada de %d = %0.1f\n", a, sqrt(a));
 
   getch();
   return 0;
}
