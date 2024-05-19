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
    printf("Matriz:\n\n");
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
}
void MaiorLinha(int a[][3], int l, int c, int *SomaExportada, int *linhaMaiorEx) {
    int somalinha=0, somaMAior=0, linhaMaior=0;
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            somalinha += a[i][j];
        }
        if (somalinha > somaMAior) {
            somaMAior = somalinha;
            linhaMaior = i;
        }
        somalinha = 0;
    }
    *SomaExportada = somaMAior;
    *linhaMaiorEx = linhaMaior;

}
int main () {
    int a[3][3], maiorsoma, maiorLinha;
    PreencheMatrizes(a, 3, 3);
    MostraMatrizes(a, 3, 3);
    MaiorLinha(a, 3, 3, &maiorsoma, &maiorLinha);
    printf("A maior soma eh: %d e a linha eh: %d", maiorsoma, maiorLinha);
}
