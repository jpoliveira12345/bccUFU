// Programa - nomearquivo.c
// Autor: Claudio C. Rodrigues
// Data: dd/mm/aaaa

//declara��o de bibliotecas utilizadas
#include <stdlib.h>
#include <stdio.h>

// declara��o de variaveis globais, macros e prot�tipos


int main(int argc, char *argv[]){
     // declara��o de vari�veis locais e comandos
     unsigned int o;
     do {
        printf("1. continua\n");
        printf("2. sair\n");
        printf("opcao --> ");
        scanf("%u",&o);
     } while(o != 2);

     return 0;
}
