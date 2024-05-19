/*
1. Criar uma estrutura para receber os nomes de clubes de futebol e seus
respectivos pontos no campeonato. Ler os nomes e os pontos e mostrar
qual equipe (nome e pontos) é a vencedora. Considerar 10 clubes no total.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 50
typedef struct
{
    char nome[50];
    int pontos;
} time;
time letimes(time taltime)
{
    printf("Digite o nome do time: ");
    fgets(taltime.nome, MAX, stdin);
    setbuf(stdin, NULL);
    printf("Digite o numero de pontos do %s: ", taltime.nome);
    scanf("%d", taltime.pontos);
    setbuf(stdin, NULL);
}
int vencedor(int t, time vtimes[t])
{
    int maiorpontuacao = 0, indicevencedor;
    for (int i = 0; i < t; i++)
    {
        if (vtimes[i].pontos > maiorpontuacao)
        {
            maiorpontuacao = vtimes[i].pontos;
            indicevencedor = i;
        }
    }
    return indicevencedor;
}
int main()
{
    int numtimes = 10, vencedorindice;
    time vtimes[numtimes];
    for (int i = 0; i < numtimes; i++)
    {
        letimes(vtimes[i]);
    }
    vencedorindice = vencedor(numtimes, vtimes);
    printf("O vencedor eh %s, com %d pontos.\n", vtimes[vencedorindice].nome, vtimes[vencedorindice].pontos);
}