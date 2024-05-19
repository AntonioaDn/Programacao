/*
Fazer um programa para ler uma string e um caracter qualquer. Construir um
vetor (OC) contendo as posições (índices) de onde ocorre o caracter na string.
Exemplo: Seja a string "abracadabra!!!" e o caracter 'a', então o vetor de índices OC
deverá conter os seguintes valores: { 0 3 5 7 10 -1}. O valor -1 indica final de vetor,
ou seja, que não existem mais ocorrências. Caso, não exista nenhuma ocorrência,
deve ser armazenado o valor -1 no vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void constroivetoroc (int t, char s[t], char a, int *v1) {
    int c=0;
    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] == a) {
            c++;
        }
    }
    int v[c+1], c1=0;
    for (int j=0; s[j] != '\0'; j++) {
        if (s[j] == a) {
            v[c1] = j;
            c1++;
        }
    }
    for (int k=0; k<c; k++) {
        printf("%d ", v[k]);
    }
}
int main () {
    int *p;
    int t=900, v1[t];
    p = &v1;
    char a, s[t];
    printf("Digite uma string com menos de 900 caracteres: ");
    fgets(s, t, stdin);
    printf("Agora digite um caracter para exibir em quais posicoes ele aparece na string: ");
    scanf("%c", &a);
    constroivetoroc(t, s, a, p);
}