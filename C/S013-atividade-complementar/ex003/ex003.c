/*
3. Escreva um programa completo em C, usando funções, que leia um vetor e particione os elementos do vetor pelo seu valor médio, gerando dois outros vetores: o primeiro contendo os elementos que tenham valores menores que a média, e o segundo contendo os elementos com valores maiores ou iguais à média. Por exemplo, o vetor V ilustrado abaixo gera como resultado os vetores V1 e V2, uma vez que a média dos elementos em V é 33.85.
V: 10 15 3 7 87 101 14
V1: 10 15 3 7 14
V2: 87 101
Considerações:
a. Escreva uma função que armazene os números no vetor (os números podem ser lidos pelo usuário ou gerados aleatoriamente).
b. Escreva uma função que mostre o vetor. A mesma função deverá ser usada para mostrar o vetor V e os vetores particionados, V1 e V2.
c) Utilize as definições:
#define MAX 100
int V[MAX];
d) Você deve obrigatoriamente escrever uma função para calcular a média dos elementos do vetor.
e) Escreva uma função que particiona os elementos do vetor V pelo seu valor médio.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100
void preenchevetores(int t, int v[t])
{
    srand(time(NULL));
    for (int i = 0; i < t; i++)
    {
        v[i] = (rand() % 1000);
    }
}
void mostravetor(int t, int v[t])
{
    printf("\n");
    for (int j = 0; j < t; j++)
    {
        printf("%d ", v[j]);
    }
    printf("\n\n");
}
double mediavetor(int t, int v[t])
{
    int soma = 0;
    for (int i = 0; i < t; i++)
    {
        soma += v[i];
    }
    return (double)soma / t;
}
void elementosacimaabaixomedia(double media, int t, int v[t], int *t1, int *t2)
{
    int tamanho1 = 0, tamanho2 = 0;
    for (int i = 0; i < t; i++)
    {
        // Aqui t1 se refere ao tamanho do vetor com os elementos menores que a média, já t2 o tamanho com os maiores ou iguais.
        if (v[i] < media)
        {
            tamanho1 += 1;
        }
        else
        {
            tamanho2 += 1;
        }
    }
    *t1 = tamanho1;
    *t2 = tamanho2;
}
void particionavetor(int media, int t, int v[t], int t1, int v1[t1], int t2, int v2[t2])
{
    int l = 0, m = 0;
    for (int i = 0; i < t; i++)
    {
        if (v[i] < media)
        {
            v1[l] = v[i];
            l++;
        }
        else
        {
            v2[m] = v[i];
            m++;
        }
    }
}
int main()
{
    int v[max], *t1, *t2, t = max, tamanho1, tamanho2;
    t1 = &tamanho1;
    t2 = &tamanho2;
    double media = 0;
    preenchevetores(t, v);
    printf("Primeiro vetor: \n");
    mostravetor(t, v);
    media = mediavetor(t, v);
    printf("A media eh %.2lf\n\n", media);
    elementosacimaabaixomedia(media, t, v, t1, t2);
    int v1[tamanho1], v2[tamanho2];
    particionavetor(media, t, v, tamanho1, v1, tamanho2, v2);
    printf("Vetor com valores menores que a media: \n");
    mostravetor(*t1, v1);
    printf("Vetor com valores acima ou iguais a media: \n");
    mostravetor(*t2, v2);
    return 0;
}