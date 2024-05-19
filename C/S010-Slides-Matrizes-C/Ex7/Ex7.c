#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
/*
Escreva um programa que preencha uma matriz M(6 * 4) com números inteiros, calcule e mostre quantos
elementos dessa matriz são maiores que 30 e, em seguida, monte uma segunda matriz com os elementos 
diferentes de 30. No lugar do número 30, da segunda matriz, coloque o número zero.
*/
void PreencheMatrizes (int a[][4], int linhas, int colunas) {//para uma matriz 6x4
    srand(time(NULL));
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            a[i][j] = rand()%50;
        }
    }
}
void CalculaElementosMaiores30 (int a[][4], int linhas, int colunas) {
    int MaioresDe30=0;
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            if (a[i][j] > 30) {
                MaioresDe30 += 1;
            }
        }
    }
    printf("\nA matriz tem %d elementos maiores de 30.\n", MaioresDe30);
}
void MostraMatrizes (int a[][4], int l, int c) {//para uma matriz nx4
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
}
void MatrizSem30 (int a[][4], int b[][4], int l, int c) {
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            if (a[i][j]!=30) {
                b[i][j]=a[i][j];
            }
            else
                b[i][j]=0;
        }
    }
}
int main () {
    int a[6][4], b[6][4];
    PreencheMatrizes(a, 6, 4);
    MostraMatrizes(a, 6, 4);
    CalculaElementosMaiores30(a, 6, 4);
    MatrizSem30(a, b, 6, 4);
    MostraMatrizes(b, 6, 4);
    return 0;
}