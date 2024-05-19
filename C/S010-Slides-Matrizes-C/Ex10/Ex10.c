#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
/*
10. Seja a declaração: int N[LINHA][COLUNA]; Escrever um programa capaz de:

a) ler os elementos da matriz.

b) identificar o número de elementos iguais a zero em cada uma das linhas.

c) identificar o número de elementos iguais a zero em cada uma das colunas.

d) identificar o número de elementos pares em determinada linha (a linha será fornecida pelo usuário).

e) identificar o número de elementos pares em determinada coluna (a coluna será fornecida pelo usuário).

f) calcular a média aritmética dos elementos de cada uma das linhas, armazenando esses valores em um vetor.

g) identificar a linha que tem a maior média de seus elementos.

h) mostrar todos os resultados.
*/
void PreencheMatrizes (int linhas, int colunas, int a[linhas][colunas]) {//para uma matriz linhasxcolunas
    srand(time(NULL));
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            a[i][j] = rand()%10;//apenas numeros de 0 a 9
        }
    }
}
void MostraMatrizes (int linhas, int colunas, int a[linhas][colunas]) {//para uma matriz linhasxcolunas
    printf("\n");
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void Elementos0Linhas (int linhas, int colunas, int a[linhas][colunas]) {//para uma matriz linhasxcolunas
    int totais0=0;
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            if (a[i][j] == 0) {
                totais0 += 1;
            }
        }
        printf("\nO total de zeros na linha %d eh %d\n", i, totais0);
        totais0 = 0;
    }
}
void Elementos0Colunas (int linhas, int colunas, int a[linhas][colunas]) {//para uma matriz linhasxcolunas
    int totais0=0;
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            if (a[j][i] == 0) {
                totais0 += 1;
            }
        }
        printf("\nO total de zeros na coluna %d eh %d\n", i, totais0);
        totais0 = 0;
    }
}
void ElementosParesLinha (int linhas, int colunas, int l1, int a[linhas][colunas]) {//para uma matriz linhasxcolunas
    int totalpares=0;
    for (int i=0; i<colunas; i++) {
        if (a[l1][i] % 2 == 0) {
            totalpares += 1;
        }
    }
    printf("\nO total de pares da linha %d eh %d.\n", l1, totalpares);
}
void ElementosParesColuna (int linhas, int colunas, int c1, int a[linhas][colunas]) {//para uma matriz linhasxcolunas
    int totalpares=0;
    for (int i=0; i<colunas; i++) {
        if (a[i][c1] % 2 == 0) {
            totalpares += 1;
        }
    }
    printf("\nO total de pares da coluna %d eh %d.\n", c1, totalpares);
}
void MediaAritmeticaLinhas (int linhas, int colunas, int a[linhas][colunas], double v[linhas]) {
    int soma=0, linhaMaior=0;
    double maior=v[0];
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            soma += a[i][j];
        }
        v[i] = soma/colunas;
        soma = 0;
    }
    for (int i=0; i<colunas; i++) {
        if (v[i]>maior) {
            maior = v[i];
            linhaMaior = i;
        }
    }
    printf("\nA linha com a maior media eh %d.\n", linhaMaior);
}
int main () {
    int linhas, colunas, linhaPares, colunaPares;
    printf("Digite o numero de linhas e o de colunas: ");
    scanf("%d %d", &linhas, &colunas);
    double v[linhas];
    int N[linhas][colunas];
    printf("Qual linha verificar a quantidade de pares? ");
    scanf("%d", &linhaPares);
    printf("Qual coluna verificar a quantidade de pares? ");
    scanf("%d", &colunaPares);
    PreencheMatrizes(linhas, colunas, N);
    MostraMatrizes(linhas, colunas, N);
    Elementos0Linhas (linhas, colunas, N);
    Elementos0Colunas (linhas, colunas, N);
    ElementosParesLinha(linhas, colunas, linhaPares, N);
    ElementosParesColuna(linhas, colunas, colunaPares, N);
    MediaAritmeticaLinhas(linhas, colunas, N, v);
} 