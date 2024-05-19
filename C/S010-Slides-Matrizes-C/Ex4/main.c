#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void PreencheMatrizes (int a[][3], int linhas, int colunas) {//para uma matriz 3x3
    srand(time(NULL));
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            a[i][j] = rand()%100;
        }
    }
}
void MostraMatrizes (int a[][3], int l, int c) {//para uma matriz 3x3
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
}
void TranspoeMatriz (int a[][3], int linhas, int colunas) {
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            printf("%2d ", a[j][i]);
        }
        printf("\n");
    }
}
int main () {
    int a[3][3];
    PreencheMatrizes(a, 3, 3);
    MostraMatrizes(a, 3, 3);
    printf("\n");
    TranspoeMatriz(a, 3, 3);
}
