/*
O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um
tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta
no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três
posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente
um programa que faça uso do Código de César (3 posições), entre com uma string e
retorne a string codificada. Por exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR
FDQVDGR
*/

#include <stdio.h>
#include <string.h>

void CodigoDeCesar (char *entrada) {
    for (int i=0; entrada[i] != '\0'; i++) {
        if ((entrada[i] >= 65 && entrada[i] <= 90) || (entrada[i] >= 97 && entrada[i] <= 122)) {
            entrada[i] += 3;
            if ((entrada[i] > 90 && entrada[i] < 97) || (entrada[i] > 122)) {
                entrada[i] -= 23;
            }
        }
    }
}

int main () {
    char fraseNormal[101];
    printf("Digite uma frase para ser criptografada: ");
    fgets(fraseNormal, 101, stdin);
    CodigoDeCesar(fraseNormal);
    printf("%s", fraseNormal);
}