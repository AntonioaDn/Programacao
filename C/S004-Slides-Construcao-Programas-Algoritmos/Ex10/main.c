#include <stdio.h>
#include <stdlib.h>
/*Programa que leia o salario bruto, calcule e exiba o salario liquido de um funcion�rio; considerar que: o salario bruto
teve um reajuste de 38%; o funcion�rio receber� uma gratifica��o de 20% do valor bruto; o sal�rio total � descontado em 15%
*/
int main()
{
    float salBruto, gratificacao, salarioTotal;

    printf("Digite o salario bruto: ");
    scanf("%f", &salBruto);

    salBruto = salBruto*1.38;
    gratificacao = salBruto/5;
    salarioTotal = (salBruto+gratificacao)*0.85;

    printf("O salario liquido e: %.2f", salarioTotal);

    return 0;
}
