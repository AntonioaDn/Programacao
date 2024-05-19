#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void PreencheMatrizes (int a[][3], int linhas, int colunas);
int main() {
    int a[3][3], v[3], soma, somaS;
    //todas para matrizes 3x3
    PreencheMatrizes(a, 3, 3);
    MostraMatrizes(a, 3, 3);
    SomaDiagonal(a, 3, 3, &soma);
    TransformaDiagonalEmVetor(a, v);
    printf("A soma dos elementos da diagonal principal eh: %d\n", soma);

    MostraVetor(v);
    SomaDiagonalSecundaria(a, 3, 3, &somaS);
    printf("A soma da secundaria eh %d", somaS);
    return 0;
}
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
void SomaDiagonal (int a[][3], int linhas, int colunas, int *soma) {//para uma matriz 3x3
    int s=0;
    for (int i=0; i<linhas; i++) {
        s += a[i][i];
    }
    *soma = s;
}
void TransformaDiagonalEmVetor (int a[][3]/*matriz*/, int v[3]/*vetor de tamanho 3*/) {
    for (int i=0; i<3; i++) {
        v[i] = a[i][i];
    }
}
void MostraVetor (int v[3]/*vetor de tamanho 3*/) {
    for (int i=0; i<3; i++) {
        printf("%2d ", v[i]);
    }
    printf("\n");
}
void SomaDiagonalSecundaria (int a[][3], int linhas, int colunas, int *somaS) {//para uma matriz 3x3
    int s=0;
    for (int i=0; i<3; i++) {
        s += a[2-i][i];
    }
    *somaS = s;
}
