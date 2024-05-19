#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
1. Escreva um programa completo em C, usando funções, que leia um vetor e mostre a mensagem “VETOR ORDENADO.” ou “VETOR NÃO ORDENADO.” caso o vetor esteja ordenado ou não.

Considerações:

a. Escreva uma função que armazene os números no vetor (os números podem ser lidos pelo usuário ou gerados aleatoriamente).

b. Escreva uma função que mostre o vetor.

c. Escreva uma função que retorne 1 se o vetor estiver ordenado e -1 em caso contrário.
*/
void PreencheVetor (int t, int v[t]) {
    srand(time(NULL));
    for (int i=0; i<t; i++) {
        v[i] = (rand()%10)+1;
    }
}
void MostraVetor (int t, int v[t]) {
    for (int i=0; i<t; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
int vetorordenado (int t, int v[t]) {
    for (int i=0; i<t-1; i++) {
        if (v[i] > v[i+1]) {
            return -1;
        }
    }
    return 1;
}
int main () {
    int t=10, v[t], a;
    PreencheVetor(t, v);
    MostraVetor(t, v); 
    a = vetorordenado(t, v);
    if (a == 1) {
        printf("VETOR ORDENADO");
    }
    else {
        printf("VETOR NAO ORDENADO");
    }
}