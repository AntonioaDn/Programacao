/*
. Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 ao valor ASCII
de cada caractere da palavra. Imprima a string resultante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void SomaUmAscii (char *string) {
    int tamanho = strlen(string);
    for (int i=0; i < tamanho - 1; i++) {
        string[i] += 1;
    }
}

int main () {
    char frase[51];
    printf("Digite uma frase curta de 50 caracteres no maximo para mostrar qual e a frase, somando um na tabela ascii a cada caracter: ");
    fgets(frase, sizeof(frase), stdin);
    SomaUmAscii(frase);
    printf("%s\n", frase);
    
}