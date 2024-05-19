#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
/*
Faça um programa que preencha uma matriz M(3x3), calcule e mostre 
a matriz R, resultante da multiplicação dos elementos de M pelo seu menor 
elemento.
*/
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
void MatrizR (int a[3][3], int b[3][3], int l, int c) {
    int menor=a[0][0];
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            if (a[i][j] < menor) {
                menor = a[i][j];
            }
        }
    }
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            b[i][j] = a[i][j] * menor;
        }
    }
    MostraMatrizes(b, 3, 3);
}
int main () {
    int M[3][3], R[3][3];
    PreencheMatrizes(M, 3, 3);
    MostraMatrizes(M, 3, 3);
    printf("\n");
    MatrizR(M, R, 3, 3);
}