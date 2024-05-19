/*
Faça um programa que calcule e mostre o número de vogais de uma string. Feito
isso, o programa deve criptografar uma frase dada pelo usuário (a criptografia troca
as vogais da frase por *).
Frase: eu estou na escola
Saída: ** *st** n* *sc*l*
*/
#include <stdio.h>
#include <stdlib.h>
int contavogais (int t, char s[t]) {
    int vogais=0;
    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            vogais += 1;         
        }
    }
    return vogais;
}
void censuravogais (int t, char s[t]) {
    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            s[i] = '*';
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
    int t=900, vogais;
    char s[t];
    printf("Digite uma string com menos de 900 caracteres: ");
    fgets(s, t, stdin);
    vogais = contavogais(t, s);
    printf("A string tem %d vogais.\n", vogais);
    censuravogais(t, s);
    mostrastring(t, s);
}