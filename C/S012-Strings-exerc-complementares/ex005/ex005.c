/*
Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em
letras minúsculas. Dica: some 32 aos caracteres cujo código ASCII está entre 65 e 90.
*/

#include <stdio.h>
#include <string.h>

void ConverteMinuscula (char *string) {
    int tamanho = strlen(string);
    for (int i=0; i < tamanho - 1; i++) {
        if (string[i] >= 65 && string[i] <= 90) {
            string[i] += 32;
        }
    }
}

int main (){
    char frase[201];
    printf("Digite uma frase de ate 200 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    ConverteMinuscula(frase);
    printf("%s\n", frase);
}