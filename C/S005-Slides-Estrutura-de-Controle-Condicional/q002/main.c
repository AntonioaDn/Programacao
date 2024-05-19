#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que leia três valores e mostre qual
é o maior valor e qual é o menor valor.
*/
int main()
{
    float a, b, c, maior, menor;
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    maior = a;
    menor = c;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    if (b < menor)
        menor = b;
    if (a < menor)
        menor = a;

    printf("O maior e: %.3f\n", maior);
    printf("O menor e: %.3f", menor);

    return 0;
}
