#include <stdio.h>
#include <stdlib.h>
/*
Programa que recebe tres notas e calcula a media das notas
*/
int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("A media e: %2f", media);

    return 0;
}
