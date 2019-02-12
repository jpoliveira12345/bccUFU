// Programa - triangular.c
// Autor: Fulano C. Rodrigues
// Data: dd/mm/aaaa
// 
/* Programa que determina se um numero e' triangular
-  Dizemos que um n�mero natural � triangular se ele � produto 
   de tr�s n�meros naturais consecutivos. 
   Exemplo: 120 � triangular, pois 4.5.6 = 120.
*/
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos
	int i, n;
	
//	printf("Digite o valor de n: ");
//	scanf("%d",&n);
	for(n=1;n<1000000;n++) {
	/* for com comando vazio! */
	for (i = 1; i*(i+1)*(i+2) < n; i++) ;
	
	if (i*(i+1)*(i+2) == n)
	printf("%d e' o produto %d*%d*%d\n", n, i, i+1, i+2);
//	else
//	printf("%d nao e' triangular\n", n);
   }
	
	getch();
	
   return 0;
}
