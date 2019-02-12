//Programa:matrizverde.c
//Autor: Thiago Pereira Burgos
//Data:02/05/2016
/*Descri�ao:Escreva uma fun��o em linguagem C denominada diag_superior que receba como
par�metros uma matriz Anxn de elementos reais de dupla precis�o e um valor inteiro (n) que define
a dimens�o da matriz nxn. Em seguida, calcule e mostre a m�dia considerando somente aqueles
elementos que est�o na �rea superior da matriz, conforme ilustrado abaixo (�rea verde).
*/

#include <stdlib.h>
#include <stdio.h>
#define SIZE 100

void le_matriz(double A[][SIZE],int a)
{
    int i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            printf("\nA[%d;%d]:",i,j);
            scanf("%lf", &A[i][j]);
        }
    }
}

double diag_superior(double A[][SIZE],int a)
{
    double soma=0;
    int i,j,con=0;

    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            if(i<j&&i+j<a-1)
            {
                soma+=A[i][j];
                con+=1;
            }
        }
    }
    soma=soma/con;
    return soma;
}

int main (int argc,char* argv[])
{
    int n;
    double A[100][100],med;
    do{
    printf("informe a ordem da matriz:");
    scanf("%d",&n);
    }while(n<3);
    le_matriz(A,n);
    med=diag_superior(A,n);
    printf("a media da diagonal superior dessa matriz eh %.3lf",med);
    return 0;
}
