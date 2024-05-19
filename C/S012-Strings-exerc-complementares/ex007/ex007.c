/*
Leia uma frase inclusive com os espaços em branco. Retirar os espaços em branco e
depois escrever a string resultante.
*/

#include <stdio.h>
#include <string.h>

void RetiraEspacos (char *string) {
    // Calcula o tamanho da string
    int tamanho = strlen(string);
    // Itera por cada caractere da string
    for (int i=0; i < tamanho; i++) {
        // Verifica se o caractere é um espaço
        if (string[i] == ' ') {
            // Se for um espaço, desloca todos os caracteres após ele para a esquerda
            for (int j=i; j < tamanho; j++) {
                string[j] = string[j+1];
            }
            // Diminui o tamanho da string em 1
            tamanho--;
            // Decrementa o índice para reavaliar a posição atual
            i--;
        }
    }
}

int main () {
    char frase[201];
    printf("Digite uma frase de ate 200 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    RetiraEspacos(frase);
    printf("%s\n", frase);
}