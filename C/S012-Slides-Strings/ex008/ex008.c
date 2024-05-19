#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
void apagacarcater (char string[], char caracter) {
    for (int i=0; string[i] != '\0'; i++) {
        if (string[i] == caracter) {
            string[i] = ' ';
        }
    }
}
void mostrastring (char string[]) {
    for (int i=0; string[i] != '\0'; i++){
        printf("%c", string[i]);
    }
}
int main () {
    char string[max], caracter;
    printf("Digite um caracter para apagar da string: ");
    scanf("%c", caracter);
    
    printf("Digite a string: ");
    scanf("%100[^\n]s", string);
    apagacarcater(string, caracter);
    mostrastring(string);
}