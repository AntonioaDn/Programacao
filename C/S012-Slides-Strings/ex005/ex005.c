/*
Escreva um programa que receba uma string (palavra), determine se ela é
palíndromo. Um palíndromo é uma palavra que tenha a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Ex.: arara,
ovo, anilina, salas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void verificapalindromo(int t, char s[t])
{
    int c = 0;
    for (int i = 0; s[i] != '\n'; i++)
    {
        c++;
    }
    for (int j = 0; j < c; j++)
    {
        if (s[j] != s[c-1-j])
        {
            printf("Nao eh palindromo.\n");
            break;
        }
        if (j == c - 1 && s[j] == s[c-j-1])
        {
            printf("Eh um palindromo.\n");
        }
    }
}
int main()
{
    int t = 700;
    char s[t];
    printf("Digite uma string com menos de 700 caracteres para saber se sao palindromos: ");
    fgets(s, t, stdin);
    verificapalindromo(t, s);
    return 0;
}