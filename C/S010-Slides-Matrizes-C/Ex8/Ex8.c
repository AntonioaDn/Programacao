/*
8. Faça um programa que preencha uma matriz M(8 * 8) com números inteiros e some 
cada uma das linhas, armazenando o resultado das somas em um vetor. A seguir, o 
programa deverá multiplicar cada elemento da matriz pela soma da linha correspondente
 e mostrar a matriz resultante.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void PreencheMatrizes (int a[][8], int linhas, int colunas) {//para uma matriz 8x8
    srand(time(NULL));
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            a[i][j] = (rand()%10) + 1;
        }
    }
}
void MostraMatrizes (int a[][8], int l, int c) {//para uma matriz nx8
    printf("\n");
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void SomaDasLinhas(int a[][8], int l, int c, int vetorSomaLinhas[8]) {
    int somalinha=0, linhaMaior=0;
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            somalinha += a[i][j];
        }
        printf("\n soma da linha %d \n", somalinha);
        vetorSomaLinhas[i] = somalinha;
        somalinha = 0;
    }
}
void MultiplicaMatriz (int a[8][8], int l, int c, int v[8]) {
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            a[i][j] = a[i][j] * v[i];
        }
    }
}
int main () {
    int a[8][8], v[8];
    PreencheMatrizes(a, 8, 8);
    MostraMatrizes(a, 8, 8);
    SomaDasLinhas(a, 8, 8, v);
    MultiplicaMatriz(a, 8, 8, v);
    MostraMatrizes(a, 8, 8);
}