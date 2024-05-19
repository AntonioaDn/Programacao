#include <stdio.h>
#include <math.h>
#include <time.h>
/*
Dentro da função main, colocar uma matriz 4x5, preencher essa matriz com uma função
de números aleatórios. Depois mostrar a matriz, identificar qual o seu maior elemento e a
posição através de uma função também.
*/
void PreencheMatrizes(int matriz[][5], int linhas, int colunas)
{
    srand(time(NULL));
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
}
void MostraMatrizes(int matriz[4][5], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}
void MaiorElemento(int matriz[][5], int linhas, int colunas, int *l, int *c, int *maiorElemento)
{
    int maior = matriz[0][0];
    int linhaMaior = 0;
    int colunaMaior = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }
    *l = linhaMaior;
    *c = colunaMaior;
    *maiorElemento = maior;
}
int main()
{
    int linhas = 4, colunas = 5, maiorExportado;
    int matriz[4][colunas];
    PreencheMatrizes(matriz, linhas, colunas);
    MostraMatrizes(matriz, linhas, colunas);
    MaiorElemento(matriz, linhas, colunas, &linhas, &colunas, &maiorExportado);
    printf("%d eh o maior elemento, na linha %d coluna %d", maiorExportado, linhas, colunas);
    return 0;
}