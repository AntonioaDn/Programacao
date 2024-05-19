/*
Leia uma cadeia de caracteres e converta todas as letras minúsculas para maiúsculas.
Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.
*/

#include <stdio.h>
#include <string.h>

void ConverteMaiuscula (char *string) {
    int tamanho = strlen(string);
    for (int i=0; i < tamanho - 1; i++) {
        if (string[i] >= 97 && string[i] <= 122) {
            string[i] -= 32;
        }
    }
}

int main () {
    char frase[201];
    printf("Digite uma frase de ate 200 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    ConverteMaiuscula(frase);
    printf("%s\n", frase);
}