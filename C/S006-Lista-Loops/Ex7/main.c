#include <stdio.h>
#include <stdlib.h>
/*
7. Modifique o exerc�cio anterior para que o usu�rio informe a quantidade de termos a ser
calculada.

*/
int main()
{
    int n;
    float numerador, denominador;
    float sequencia = 0;
    printf("Digite a quantidade de termos do somatorio: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            numerador = 485 - (5 * i);
            denominador = 9 + i;
            printf(" + %.1f/%.1f ", numerador, denominador);
        }
        if (i % 2 == 0) {
            numerador = -1 * (485 - (5 * i));
            denominador = 9 + i;
            printf("%.1f/%.1f", numerador, denominador);
        }
     sequencia += (float) numerador/denominador;
    }
    printf("\nA soma deu %f", sequencia);
    return 0;
}
