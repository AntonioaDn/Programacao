#include <stdio.h>
#include <stdlib.h>
//Programa para calcular e mostrar a �rea de um c�rculo com raio r escrito pelo usu�rio.
int main()
{
    float raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("A area e: %.3f", 3.14*raio*raio);

    return 0;
}
