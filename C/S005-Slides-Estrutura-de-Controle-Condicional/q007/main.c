/*
Faça um programa que mostre o menu de opções a
seguir, receba a opção do usuário e os dados necessários
para cada operação.
Menu de opções:
1 - Somar dois números;
2 - Raiz quadrada de um número.
Digite a opção desejada:
*/
#include <math.h>
#include <stdio.h>
int main()
{
    printf("1 - Somar dois numeros\n2 - Raiz quadrada de um numero\nOpcao: ");
    int opcao, num1, num2, num;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Digite os dois numeros: ");
        scanf("%d %d", &num1, &num2);
        int soma = num1 + num2;
        printf("A soma eh: %d\n", soma);
        break;
    case 2:
        printf("Digite um numero: ");
        scanf("%d", &num);
        double raiz = sqrt(num);
        printf("A raiz quadrada de %d eh %.2lf\n", num, raiz);
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }
}