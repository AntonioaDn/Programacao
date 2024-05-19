#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Escreva uma função que concatena/junta dois vetores. Por
exemplo, V1 = 0, 1, 2, 3, 4 e V2 = 4, 3, 2, 1, 0, o vetor resultante
será R = 0, 1, 2, 3, 4, 4, 3, 2, 1, 0.
*/
int* ConcatenaVetores(int t1, int t2, int v1[t1], int v2[t2], int v3[t1 + t2]) {
    int contador=0;
    int t3=t1+t2;
    for (int i=0; i<t1; i++) {
        v3[i] = v1[i];
    }
    for(int i=0; i<t2; i++) {
        v3[t1+i] = v2[i];
    }
    return v3;
}
void MostraVetor(int t, int a[t])
{
    for (int i = 0; i < t; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void PreencheVetores(int t, int a[t], int s) {
    srand(s);
    for (int i = 0; i < t; i++)
    {
        a[i] = rand() % 100;
    }
}

int main()
{
    int t1, t2;
    printf("Digite o tamanho do vetor 1 e 2: ");
    scanf("%d %d", &t1, &t2);
    int v1[t1], v2[t2];
    int *v3;
    PreencheVetores(t1, v1, 1);
    PreencheVetores(t2, v2, 2);
    MostraVetor(t1, v1);
    MostraVetor(t2, v2);
    v3 = ConcatenaVetores(t1, t2, v1, v2, v3);
    MostraVetor(t1+t2, v3);
}