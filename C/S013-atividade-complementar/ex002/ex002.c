/*
2. Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da linha em que se encontra o menor elemento da matriz. Escreva um programa, usando funções, que receba uma matriz 4x7 com números inteiros e calcule o MINMAX e a sua posição (linha e coluna).
Considerações:
a. Escreva uma função que armazene os números na matriz (os números podem ser lidos pelo usuário ou gerados aleatoriamente).
b. Escreva uma função que mostre a matriz formatada.
c. Escreva uma função que receba como parâmetro a matriz e retorne o MINMAX e a sua posição (linha e coluna).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preenchematriz(int t1, int t2, int m[t1][t2])
{
    srand(time(NULL));
    for (int i = 0; i < t1; i++)
    {
        for (int j = 0; j < t2; j++)
        {
            m[i][j] = (rand() % 1000);
        }
    }
}
void mostramatriz(int t1, int t2, int m[t1][t2])
{
    for (int i = 0; i < t2; i++)
    {
        printf("\t%d", i);
    }
    printf("\n\n");
    for (int j = 0; j < t1; j++)
    {
        printf("%d\t", j);
        for (int k = 0; k < t2; k++)
        {
            printf("%d\t", m[j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
void calculaminmax(int t1, int t2, int m[t1][t2], int *minmax, int *linha, int *coluna)
{
    int menor = m[0][0], minmaximo, menorlinha, menorcoluna;
    for (int i = 0; i < t1; i++)
    {
        for (int j = 0; j < t2; j++)
        {
            if (m[i][j] < menor)
            {
                menor = m[i][j];
                menorlinha = i;
                minmaximo = m[menorlinha][0];
            }
        }
    }
    for (int k = 0; k < t2; k++)
    {
        if (m[menorlinha][k] > minmaximo)
        {
            minmaximo = m[menorlinha][k];
            menorcoluna = k;
        }
    }
    *minmax = minmaximo;
    *linha = menorlinha;
    *coluna = menorcoluna;
}
int main()
{
    int t1 = 4, t2 = 7, minmax, linha, coluna, m[t1][t2];
    preenchematriz(t1, t2, m);
    mostramatriz(t1, t2, m);
    calculaminmax(t1, t2, m, &minmax, &linha, &coluna);
    printf("O elemento minmax eh %d, sua linha eh %d e coluna %d", minmax, linha, coluna);
}