// Programa - nome
// Autor: Claudio C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos

     int m[10] = {10,20,30,40,50,60,70,80,90,100}, *f; 
     f = &m[5]; 
     ++*f; 
     printf("%d %d %d %d\n", *f, --*f, *(f+1), *f++);
     getch();

     return 0;
}
