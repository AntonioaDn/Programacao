#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa para ler 3 valores e escrever a somados 2 maiores. Considere que o usuário não informará valores iguais.
*/
int main()
{
    float num1, num2, num3, maior1, maior2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    maior1 = num1;
    maior2 = num2;

    if (num3 > num1) {
        maior1 = num3;
        if (num1 > num2) {
            maior2 = num1;
        }
    }
    else
        if (num3 > num2) {
            maior2 = num3;
        }
    soma = maior1 + maior2;

    printf("A soma dos dois maiores e: %.2f", soma);
    return 0;
}
