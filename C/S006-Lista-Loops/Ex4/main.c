#include <stdio.h>
#include <stdlib.h>
/*
4. Uma Loja de Utilidades utiliza o c�digo 1-para vendas a vista e 2-para vendas a prazo.
Escreva um programa que leia, para cada venda realizada, o c�digo da venda (1 ou 2) e o
valor da venda. O programa deve calcular e mostrar o valor total das vendas � vista, o
valor total das vendas a prazo e o valor total das vendas (a vista e a prazo) efetuadas. O
programa termina quando o c�digo da venda for igual a zero.

*/
int main()
{
    float valorVenda, avista, prazo, total;
    int codigoVenda;
    codigoVenda = 3;
    avista = 0;
    prazo = 0;
    while (codigoVenda != 0) {
        printf("Digite o valor da venda: ");
        scanf("%f", &valorVenda);
        printf("Digite o codigo da venda: ");
        scanf("%d", &codigoVenda);
        while (codigoVenda != 0 && codigoVenda != 1 && codigoVenda != 2) {
            printf("Codigo invalido, digite 1 para vendas a vista, 2 para vendas parceladas e 0 para calcular o total: ");
            scanf("%d", &codigoVenda);
        }
        if (codigoVenda == 1) {
            avista = avista + valorVenda;
        }
        if (codigoVenda == 2) {
            prazo = prazo + valorVenda;
        }
        total = avista + prazo;
    }
    printf("O valor total das vendas a vista foi: %.2f\n", avista);
    printf("O valor total das vendas parceladas foi: %.2f\n", prazo);
    printf("O valor total das vendas foi: %.2f", total);

    return 0;
}
