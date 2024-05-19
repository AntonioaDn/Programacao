#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que leia 3 números inteiros emostre-os em ordem crescente.
*/


int main()
{
    int num1, num2, num3, maior, menor, medio;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        maior = num1;
        if (num2 > num3) {
            medio = num2;
            menor = num3;
        }
        else {
            medio = num3;
            menor = num2;
        }
    }
    if (num2 > num1 && num2 > num3) {
        maior = num2;
        if (num1 > num3) {
            medio = num1;
            menor = num3;
        }
        else {
            medio = num3;
            menor = num1;
        }
    }
    if (num3 > num2 && num3 > num1) {
        maior = num3;
        if (num1 > num2) {
            medio = num1;
            menor = num2;
        }
        else {
            medio = num2;
            menor = num1;
        }
    }

    printf("A ordem crescente dos numeros e: %d %d %d", menor, medio, maior);
    return 0;
}
