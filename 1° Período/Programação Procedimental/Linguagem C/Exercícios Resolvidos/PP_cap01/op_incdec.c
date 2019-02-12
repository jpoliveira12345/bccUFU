/* *******************************************************************
Programa: op_incdec.c
Proposito: Operadores incrementais
******************************************************************* */
int main(){
	int i = 0, j = 10;
	float f = -5.0;
	char  c = 'Z';

	// Incremento
	do{
		i++;
		j--;
		f++;
		c--;
		printf("%d %d %.15f %c\n",i,j,f,c);
	}while(i < 10);

	// Posicao do operador:
	// Observe que...
	i = 0;
	j = i++;    // atribui e depois incrementa
	// ... e' diferente de:
	i = 0;
	j = ++i;    // incrementa e depois atribui

	// Precedencia:
	i = j++ * 3;
	j = 4 % --i;
	
	getch();
	return 0;

}
