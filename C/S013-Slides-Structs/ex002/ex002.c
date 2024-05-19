/*
Faça um programa que leia o código, a descrição, o valor unitário e a
quantidade em estoque de 10 produtos comercializados em uma papelaria.
Estas informações deverão ser armazenadas em um vetor de estruturas.
Depois da leitura dos dados de entrada, o programa deverá:
• Realizar uma rotina que permita alterar a descrição, o valor unitário e a
quantidade em estoque de determinado produto, que deverá ser
localizado por meio do seu código;
• Realizar uma rotina que mostre todos os produtos cuja descrição
comece com determinada letra (informada pelo usuário);
• Mostrar todos os produtos com quantidade em estoque inferior a 5
unidades.
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int codigo;
    char descricao[100];
    int valorunitario;
    int estoque;
} produto;
void leprodutos(produto *a)
{
    printf("Digite o codigo do produto: ");
    scanf("%d", a->codigo);
    printf("Digite a descricao do produto: ");
    fgets(a->descricao, 100, stdin);
    printf("Digite o valor unitario do produto: ");
    scanf("%d", a->valorunitario);
    printf("Digite a quantidade desse produto no estoque: ");
    scanf("%d", a->estoque);
}
int main()
{
    int t = 10;
    produto vprodutos[t];
    for (int i = 0; i < t; i++)
    {
        leprodutos(&vprodutos[i]);
    }
    return 0;
}
