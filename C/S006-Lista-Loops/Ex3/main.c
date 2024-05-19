#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
3. Escreva um programa que leia um n�mero inteiro maior que zero e mostre se o n�mero
� perfeito ou n�o. Sabe-se que um n�mero � perfeito quando ele � igual � soma dos seus
divisores (exceto ele mesmo).
Por exemplo, 6 � perfeito pois 6 = 1+2+3.
Outros exemplos de n�meros perfeitos: 28, 496 e 8128.
*/
int main()
{
    int numero, soma;
    soma = 0;
    printf("Digite um numero inteiro e maior que zero para verificar se ele e perfeito: ");
    scanf("%d", &numero);
    while (numero <= 0) {
        printf("O numero nao e inteiro maior que zero, digite outro: ");
        scanf("%d", &numero);
    }
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma = soma + i;
        }
    }
    if (soma == numero) {
        printf("O numero e perfeito.");
    }
    else
        printf("O numero nao e perfeito.");
    return 0;
}
