#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
15. Fazer um programa que leia dois conjuntos, A e B, de 10 inteiros
cada. Escrever uma função que determine o conjunto interseção
entre A e B (elementos comuns aos dois conjuntos).
*/
void PreencheVetores(int t, int a[t], int s)
{
    srand(s);
    for (int i = 0; i < t; i++)
    {
        a[i] = rand() % 10;
    }
}
void MostraVetor(int t, int a[t])
{
    printf("\n");
    for (int i = 0; i < t; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void ConjuntoIntercessao (int t1, int t2, int v1[t1], int v2[t2]) {
    printf("O conjunto intercessao eh: {");
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            if (v1[i]==v2[j]) {
                printf("%d ", v1[i]);
            }
        }
    }
    printf("}.");
}
int main () {
    int v1[10], v2[10], t1=10, t2=10;
    PreencheVetores(t1, v1, 1);
    PreencheVetores(t2, v2, 3);
    MostraVetor(t1, v1);
    MostraVetor(t2, v2);
    ConjuntoIntercessao(t1, t2, v1, v2);
}