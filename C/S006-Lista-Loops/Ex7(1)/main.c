#include <stdio.h>
#include <stdlib.h>
/*
7. Modifique o exerc�cio anterior para que o usu�rio informe a quantidade de termos a ser
calculada.

*/
int main()
{
    double x = 480, y = 10, z = 0, n = 0, i = 0;
    printf("Quantos termos deverao ser somados? ");
    scanf("%lf", &n);
    while (i <= n) {
        z += x/y;
        printf("+ %.0lf/%.0lf ", x, y);
        x -= 5;
        y += 1;
        i += 1;

        z -= x/y;
        printf("- %.0lf/%.0lf ", x, y);
        x -= 5;
        y += 1;
        i += 1;
    }
    printf("\n%.4lf", z);
    return 0;
}
