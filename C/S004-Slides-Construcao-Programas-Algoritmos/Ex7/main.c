#include <stdio.h>
#include <stdlib.h>
//Calcular quantas horas, minutos e segundos um numero representa
int main() {
    int numero, segundos, minutos, horas;

    printf("Digite o numero: ");
    scanf("%i", &numero);

    horas = numero/3600;
    minutos = (numero%3600)/60;
    segundos = ((numero%3600)%60);


    printf("O numero %i representa: %i horas, %i minutos e %i segundos", numero, horas, minutos, segundos);

    return 0;
}
