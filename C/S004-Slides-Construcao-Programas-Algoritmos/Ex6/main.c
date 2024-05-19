#include <stdio.h>
#include <stdlib.h>
//Calcular e mostrar a area e o volume de um cilindro
//Para area total e so calcular duas vezes a area da base mais a area lateral que se da pelo comprimento da circunf. vezes h
//Area da base e pi*raio*raio
int main()
{
    float raio, altura, areaTotal, areaBase, comprimento, volume;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    comprimento = 2*3.14*raio;
    areaTotal = (3.14*raio*raio*2)+(comprimento*altura);
    areaBase = 3.14*raio*raio;
    volume = altura*areaBase;

    printf("A area total do cilindro e: %.2f\n", areaTotal);
    printf("O volume do cilindro e: %.2f\n", volume);

    return 0;
}
