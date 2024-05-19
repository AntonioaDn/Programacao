#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Programa que receba um número positivo e maior que zero, e exiba esse número ao quadrado, ao cubo, raiz quadrada e raiz cubica
//Usar a função "pow(base,expoente)

int main()
{
    float n;

    printf("Digite um numero positivo e maior que zero: ");
    scanf("%f", &n);

    if (n <= 0) {
        printf("Numero invalido.");
        exit(0);
    }
    printf("Ao quadrado: %.2f\n", n*n);
    printf("Ao cubo: %.2f\n", n*n*n);
    printf("Raiz quadrada: %.2f\n", pow(n, 0.5));
    printf("Raiz cubica: %.2f\n", pow(n, 1.0/3));

    return 0;
}
