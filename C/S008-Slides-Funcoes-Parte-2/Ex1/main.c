#include <stdio.h>
#include <stdlib.h>
/*1. Escreva uma função chamada MM que recebe dois parâmetros,
A e B, e devolve o menor dos dois em A e o maior dos dois em B.
Caso sejam passados valores iguais, a ordem da resposta entre
eles não importa.
*/
void MM (float *a, float *b) {
    float aux=0;
    if (*b < *a) {
        aux = *a;
        *a = *b;
        *b = aux;}
    }
int main()
{
    float num1, num2;
    printf("Digite dois valores: ");
    scanf("%f %f", &num1, &num2);
    MM(&num1, &num2);
    printf("O menor eh %f e o maior eh %f.\n", num1, num2);
    return 0;
}
