#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int l, t, tamanho;
    char string[101];
    scanf("%d", &t);
    for (int i=0; i<t; i++) {
        l=0;
        scanf("%s", &string);
        for (int j=0; j<101; j++) {
            if (string[j] == '1') {
                l += 2;
            }
            if (string[j] == '2' || string[j] == '3' || string[j] == '5' ) {
                l += 5;
            }
            if (string[j] == 4) {
                l += 4;
            }
            if (string[j] == '6' || string[j] == '9' || string[j] == '0') {
                l += 6;
            }
            if (string[j] == '7') {
                l += 3;
            }
            if (string[j] == '8') {
                l += 7;
            }
            if (string[j] != '1' && string[j] != '2' && string[j] != '3' && string[j] != '4' && string[j] != '5' && string[j] != '6' && string[j] != '7' && string[j] != '8' && string[j] != '9' && string[j] != '0') {
                break;
            }
        }
        printf("%d leds\n", l);
    }
    return 0;
}