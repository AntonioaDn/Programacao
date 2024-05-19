/*
Faca um programa que receba uma frase e mostre cada palavra dela em uma linha separada
*/

#include <stdio.h>
#include <stdlib.h>

void ExibePalavras (char *frase) {
    for (int i=0; frase[i] != '\0'; i++) {
        printf("%c", frase[i]);
        if (frase[i] == ' ') {
            printf("\n");
        }
    }
}

int main()
{
    char frase[250];
    printf("Digite uma frase de ate 250 caracteres: ");
    scanf("%250[^\n]s", frase);
    ExibePalavras(frase);
    return 0;
}
