#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
5. Fazer um programa que calcule e mostre o resultado do seguinte somat�rio: 2 elevado a um sobre 10 mais
dois elevado a 2 sobre 9, at� dois elevado a 10 sobre 1.
*/
int main()
{
    float soma;

    for (int i = 1; i <= 10; i++) {
        soma = pow(2, i) / (11 - i);
    }

    printf("A soma e: %.4f", soma);

    return 0;
}
