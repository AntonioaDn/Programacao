#include <stdio.h>
#include <stdlib.h>
/* 4.
. Escreva uma função que receba um numero inteiro positivo
representando os segundos e converta-o para horas, minutos esegundos.
*/
void TransformaSegundos (int *a) {
    int horas, minutos, segundos;
    horas = (*a)/3600;
    minutos = ((*a)%3600)/60;
    segundos = ((*a)%3600)%60;
    printf("O numero %d representa %d horas %d minutos e %d segundos", *a, horas, minutos, segundos);
}
int main()
{
    int num;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);
    TransformaSegundos(&num);
    return 0;
}
