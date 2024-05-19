#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

/*
9. Escreva um programa que preencha uma matriz M(10 * 10) com números inteiros, execute
as trocas especificadas a seguir e mostre a matriz resultante: a linha 2 com a linha 8 ;
a coluna 4 com a coluna 10.
*/

void PreencheMatrizes (int a[][10], int linhas, int colunas) {//para uma matriz 10x10
    srand(time(NULL));
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            a[i][j] = rand()%100;
        }
    }
}
void MostraMatrizes (int a[][10], int l, int c) {//para uma matriz nx10
    printf("\n");
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void TrocaLinhas (int a[][10], int l, int c, int l1, int l2) {
    int vaux[10];
    for (int i=l1-1; i<l1; i++) {
        for (int j=0; j<c; j++) {
            vaux[j]=a[i][j];
            a[i][j] = a[l2-1][j];
            a[l2-1][j]=vaux[j];
        }
    }
}
void TrocaColunas (int a[][10], int l, int c, int c1, int c2) {
    int vaux[10];
    for (int i=c1-1; i<c1; i++) {
        for (int j=0; j<c; j++) {
            vaux[j]=a[j][c1-1];
            a[j][c1-1] = a[j][c2-1];
            a[j][c2-1]=vaux[j];
        }
    }
}
int main () {
    int a[10][10];
    PreencheMatrizes(a, 10, 10);
    MostraMatrizes(a, 10, 10);
    TrocaLinhas(a, 10, 10, 2, 8);
    MostraMatrizes(a, 10, 10);
    TrocaColunas(a, 10, 10, 4, 10);
    MostraMatrizes(a, 10, 10);
}