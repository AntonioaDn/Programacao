#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ContaCaracter (int t, char a[t], char b, int c) {
    c=0;
    for (int i=0; a[i] != '\0'; i++) {
        if (a[i] == b) {
            c++;
        }
    }
    return c;
}
int main () {
    int contador=0, t=101;
    char palavra[t], caracter, lixo;
    printf("Digite uma palavra: ");
    scanf("%[^\n]s", palavra);
    getchar();
    printf("Digite um caracter para contar quantas vezes ele aparece na tela: ");
    scanf("%c", &caracter);
    contador = ContaCaracter(t, palavra, caracter, contador);
    printf("O caracter %c aparece %d vezes", caracter, contador);
}
