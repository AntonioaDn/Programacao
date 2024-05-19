#include <stdio.h>
#include <stdlib.h>
/*
1. A concession�ria de ve�culos �CARANGO VELHO� est� vendendo os seus ve�culos
com desconto. O desconto � calculado sobre o valor do ve�culo de acordo com o tipo do
combust�vel do ve�culo (�lcool � 25%, gasolina � 21% ou diesel �14%). Escreva um
programa que leia o valor de venda do ve�culo, calcule e mostre o valor do desconto e o
valor final do ve�culo que ser� pago pelo cliente.

*/
int main()
{
    //Primeiro passo: declarar as variaveis valorinicial, valorfinal e desconto.
    float valorinicial, valorfinal, desconto;
    int tipo;
    //segundo passo: receber o valor inicial do usuario e armazenar
    printf("Digite o valor do carro: ");
    scanf("%f", &valorinicial);
    /*terceiro passo: receber o tipo do carro do usu�rio,
    1 para alcool, 2 para gasosa e 3 para diesel*/
    printf("Qual o tipo do combustivel do veiculo? Digite 1 para alcool, 2 para gasolina ou 3 para diesel. ");
    scanf("%d", &tipo);
    //evitar que o usuario digite um numero diferente de 1,2 ou 3
    while (tipo != 1 && tipo != 2 && tipo != 3) {
        printf("Tipo invalido, digite novamente: ");
        scanf("%d", &tipo);
    }
    //calcular e exibir o desconto de acordo com o tipo
    //�lcool � 25%, gasolina � 21% ou diesel �14%
    if (tipo == 1) {
        desconto = 0.25 * valorinicial;
    }
    if (tipo == 2) {
        desconto = 0.21 * valorinicial;
    }
    if (tipo == 3) {
        desconto = 0.14 * valorinicial;
    }
    valorfinal = valorinicial - desconto;
    printf("O desconto sobre o carro sera de: %.1f\n", desconto);
    printf("O carro vai sair por: %.2f", valorfinal);

    //feito :)

    return 0;
}
