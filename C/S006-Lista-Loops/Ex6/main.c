#include <stdio.h>
#include <stdlib.h>
/*
6. Fazer um programa que calcule e mostre o resultado da s�rie abaixo considerando os
seus 30 primeiros termos. Mostre os 30 termos da sequ�ncia como escrita abaixo. 480/10 - 475/11 + 470/12 ...
*/
int main()
{
    float numerador, denominador;
    float sequencia = 0;
    for (int i = 1; i <= 30; i++) {
        if (i % 2 != 0) {
            numerador = 485 - (5 * i);
            denominador = 9 + i;
            printf(" + %.0f/%.0f ", numerador, denominador);
        }
        if (i % 2 == 0) {
            numerador = -1 * (485 - (5 * i));
            denominador = 9 + i;
            printf("%.0f/%.0f", numerador, denominador);
        }
     sequencia += (float) numerador/denominador;
    }
    printf("\n%f", sequencia);
    return 0;
}
