#include <stdio.h>
#include <stdlib.h>
/*
6. Fazer um programa que calcule e mostre o resultado da série abaixo considerando os
seus 30 primeiros termos. Mostre os 30 termos da sequência como escrita abaixo. 480/10 - 475/11 + 470/12 ...
*/
int main()
{
    double x = 480, y = 10, z = 0;
    while (y < 40) {
        z += x/y;
        printf("+ %.2lf/%.2lf ", x, y);
        x -= 5;
        y += 1;

        z -= x/y;
        printf("- %.2lf/%.2lf ", x, y);
        x -= 5;
        y += 1;
    }

    printf("\n%lf", z);
    return 0;
}
