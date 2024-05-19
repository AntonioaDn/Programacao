#include <stdio.h>
#include <stdlib.h>
/*Quilowatt = 1/5 do salario minimo
O programa recebe o valor do salario minimo e a quantidade de quilowatts consumido por uma residencia
Calcula e mostra: o valor de cada quilowatt; o valor a ser pago; o valor com 15% de desconto.
*/
int main()
{
    float salario, kWcons, valorkW;

    printf("Valor do salario min.: ");
    scanf("%f", &salario);
    printf("Quilowatts consumidos pela residencia: ");
    scanf("%f", &kWcons);

    valorkW = salario/5;

    printf("Valor de cada kW: %.2f\n", valorkW);
    printf("Valor a ser pago: %.2f\n", valorkW*kWcons);
    printf("Valor com 15 por cento de desconto: %.2f", valorkW*kWcons*0.85);

    return 0;
}
