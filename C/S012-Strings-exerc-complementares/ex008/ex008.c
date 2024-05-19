/*
Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem
alfabética. Dica: ‘a’ é menor do que ‘b’.
*/

#include <stdio.h>
#include <string.h>

void ComparaPalavras (char *palavra1, char *palavra2) {
    // Compara as duas palavras
    int resultado = strcmp(palavra1, palavra2);
    // Verifica o resultado da comparação
    if (resultado < 0) {
        printf("A palavra %s vem antes de %s na ordem alfabetica.\n", palavra1, palavra2);
    } else if (resultado > 0) {
        printf("A palavra %s vem antes de %s na ordem alfabetica.\n", palavra2, palavra1);
    } else {
        printf("As palavras são iguais.\n");
    }
}

int main () {
    char palavra1[101], palavra2[101];
    printf("Digite a primeira palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    printf("Digite a segunda palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    // Remove o caractere de nova linha do final da string
    palavra1[strlen(palavra1)-1] = '\0';
    palavra2[strlen(palavra2)-1] = '\0';
    // Compara as duas palavras
    ComparaPalavras(palavra1, palavra2);
}