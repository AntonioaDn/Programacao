#include <stdio.h>
#include <stdlib.h>
/*
1. Elabore um programa contendo uma fun��o que receba as tr�s notas de um aluno como
par�metro e uma letra. Se a letra for A, calcular a m�dia aritm�tica das notas do aluno; se
a letra for P, dever� calcular a m�dia ponderada, com pesos 5, 3 e 2. A m�dia calculada
dever� ser devolvida ao programa principal para, ent�o, ser mostrada.
*/
float calculaMedia (float a, float b, float c, char d) {
    float media;
    if (d == 'A') {
        media = (a+b+c)/3;
        return media;
    }
    if (d == 'P') {
        media =((a*5)+(b*3)+(c*2))/10.0;
        return media;
    }
}
float main()
{
    float a, b, c, media;
    char d;
    printf("Digite tres numeros em sequencia e um char para (P)onderada ou (A)ritmetica: ");
    scanf("%d %d %d %c", &a, &b, &c, &d);
    while(d != 'A' && d != 'P')
        scanf("%c", &d);
    printf("A media %c");
    return 0;
}
