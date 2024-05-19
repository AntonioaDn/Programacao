#include <stdio.h>
#include <stdlib.h>
//Programa que recebe dois numeros  emostra a divisao do primeiro pelo segundo, depois mostra o resto da divisao
int main()
{
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("A divisao do primeiro com o segundo e: %f\n", n1/n2);
    printf("O resto da divisao entre os dois numeros e: %i\n", (int) n1 % (int) n2);

    return 0;
}

