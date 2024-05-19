#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int contapalavras (int t, char s[t]) {
    int c=0;
    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\n') {
            c += 1;
            for (int j=i; s[j] != ' '; j++) {
                i=j;
            }
            i += 1;
        }
    }
    return c;
}
int main () {
    int t=700, palavras=0;
    char string[t];
    printf("Digite uma frase para contar quantas palavras ela tem: ");
    fgets(string, sizeof(string), stdin);
    palavras = contapalavras(t, string);
    printf("Essa string tem %d palavras", palavras);
    return 0;
}