#include <stdio.h>
#include <stdlib.h>
//Programa para calcular e mostrar a área de um círculo com raio r escrito pelo usuário.
int main()
{
    float raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("A area e: %.3f", 3.14*raio*raio);

    return 0;
}
