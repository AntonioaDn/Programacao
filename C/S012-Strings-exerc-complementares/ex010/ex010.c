/*
Existem palíndromos que são formados por frases tais como:
• Socorram-me subi no onibus em Marrocos.
• Omitiram radar maritmo.
Escreva um programa que ignore os espaços e o caractere ‘-’ ao verificar se uma frase é
um palíndromo.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void VerificaPalindromo (char *frase) {
    char aux[101];
    int j = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ' && frase[i] != '-') {
            aux[j] = tolower(frase[i]); // Converte para minúsculo para ignorar diferenças de maiúsculas e minúsculas
            j++;
        }
    }
    aux[j] = '\0';
    // Verifica se a frase é um palíndromo
    int tamanho = strlen(aux);
    for (int i = 0; i < tamanho / 2; i++) {
        if (aux[i] != aux[tamanho - i - 1]) {
            printf("A frase nao e um palindromo.\n");
            return;
        }
    }
    printf("A frase e um palindromo.\n");
}

int main () {
    char frase[101];
    printf("Digite uma frase para verificar se e um palindromo: ");
    fgets(frase, sizeof(frase), stdin);
    // Remove o caractere de nova linha do final da string
    frase[strlen(frase) - 1] = '\0';
    // Verifica se a frase e um palindromo
    VerificaPalindromo(frase);
}