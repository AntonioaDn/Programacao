/*
Escreva um programa que receba uma frase com caracteres em minúsculo e
transforme o primeiro caractere de cada palavra da frase em maiúsculo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void transformaminusculo (int t, char s[t]) {
    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            s[i] = s[i] - 32;
            for (int j=i+1; s[j] != ' '; j++) {
                i = j;
            }
            i++;
        }
    }
}
void mostrastring (int t, char s[t]) {
    for (int i=0; s[i] != '\0'; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}
int main () {
    int t=900;
    char s[t];
    printf("Digite uma string com caracteres minusculos para transformar as primeiras letras das palavrs em maiusculas: ");
    fgets(s, t, stdin);
    transformaminusculo(t, s);
    mostrastring(t, s);
}