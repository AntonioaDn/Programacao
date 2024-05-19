#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void crialogin(char *string, char *saida)
{
// Iniciando palavras com 1 pois é o mínimo possível;
    int palavras = 1;
// Fazendo com que o primeiro caracter do login seja a primeira letra do nome da pessoa
    saida[0] = tolower(string[0]);
// COntando o número de palavras a partir dos espaços;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            palavras++;
        }
    }
// Criando um vetor, que armazena o indice em que cada palavra começa;
// O "indicev" representa os indices do vetor que armazena o inicio das palavras, já o "indicel" representa o indice da propria string login.
    int v[palavras], indicev = 1, indicel = 1;
    v[0] = 0;
// Aqui o vetor guarda a posição seguinte aos espaços, ou seja, o início de um sobrenome;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            v[indicev] = i + 1;
            indicev++;
        }
    }
    if (palavras == 2)
    {
        for (int i = v[1]; string[i] != '\0'; i++)
        {
            saida[indicel] = tolower(string[i]);
            indicel++;
        }
    }
    if (palavras == 3)
    {
        saida[1] = tolower(string[v[1]]);
        indicel++;
        for (int i = v[2]; string[i] != '\0'; i++)
        {
            saida[indicel] = tolower(string[i]);
            indicel++;
        }
    }
    if (palavras > 3)
    {
        saida[1] = tolower(string[v[1]]);
        indicel++;
        for (int i = v[palavras-1]; string[i] != '\0'; i++) {
            saida[indicel] = tolower(string[i]);
            indicel++;
        }
    }
    saida[indicel] = '\0';
}
int main()
{
    char nome[100], login[100];
    printf("Digite um nome para criar seu login: ");
    scanf("%[^\n]s", nome);
    crialogin(nome, login);
    printf("O login sera: %s", login);
}