#include <stdio.h>
#include <stdlib.h>
// Programa que recebe tres notas e seus pesos, calcule e mostre a media ponderada
int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite a nota1: ");
    scanf("%f", &nota1);
    printf("Digite o peso dessa nota: ");
    scanf("%f", &peso1);

    printf("Digite a nota2: ");
    scanf("%f", &nota2);
    printf("Digite o peso dessa nota: ");
    scanf("%f", &peso2);

    printf("Digite a nota3: ");
    scanf("%f", &nota3);
    printf("Digite o peso dessa nota: ");
    scanf("%f", &peso3);

    media = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);
    printf("A media ponderada e: %f", media);

    return 0;
}
