#include <stdio.h>
#include <stdlib.h>
int SomaDivisores (int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Digite tres numeros, e o primeiro deve ser maior que 1: ");
    scanf("%d %d %d", &a, &b, &c);
    while (a <=1)
        scanf("%d", &a);
    printf("A soma dos divisores eh: %d", SomaDivisores(a, b, c));

    return 0;
}
int SomaDivisores (int a, int b, int c) {
    int soma=0;
    for (int i = b; i<=c; i++) {
        if (i % a == 0) {
            soma = soma + i;
        }
    }
    return soma;
}

