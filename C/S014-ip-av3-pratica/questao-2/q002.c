#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Caso teste: Antonio Augusto Dantas Neto
void abrevianomes(char *string, char *saida)
{
    int i;
    // Primeiro passo é contar quantas palavras existem.
    int palavras = 1;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            palavras++;
        }
    }
    // Segundo passo é guardar o índice em que cada palavra começa
    int vpalavras[palavras], indicev = 1;
    vpalavras[0] = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            vpalavras[indicev] = i + 1;
            indicev++;
        }
    }
    // Terceiro passo é copiar o primeiro nome
    for (i = 0; string[i] != ' '; i++)
    {
        saida[i] = string[i];
    }
    saida[i] = ' ';
    // Quarto passo abreviar o primeiro nome intermediário, ou todos se possível
    int indices = vpalavras[1];
    for (i = 1; i >= 1 && i < palavras - 1; i++)
    {
        saida[indices] = string[vpalavras[i]];
        saida[indices + 1] = '.';
        saida[indices + 2] = ' ';
        indices += 3;
    }
    // Quinto passo escrever o ultimo nome inteiro
    for (int i = vpalavras[palavras - 1]; string[i] != '\0'; i++)
    {
        saida[indices] = string[i];
        indices++;
    }
    // Ultimo passo adicionar o \0 no final da string;
    saida[indices] = '\0';
}
void retirabarran(char *string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '\n')
        {
            string[i] == '\0';
        }
    }
}
int main()
{
    char nomenormal[100], nomeabreviado[100];
    printf("Digite um nome que nao exceda 100 caracteres: \n");
    fgets(nomenormal, 100, stdin);
    retirabarran(nomenormal);
    abrevianomes(nomenormal, nomeabreviado);
    printf("O nome abreviado eh: %s", nomeabreviado);
    return 0;
}