#include <stdio.h>
#include <stdlib.h>
/*
Faça uma função que recebe a altura e o sexo de uma pessoa porparâmetro e retorna o seu peso ideal.
Calcular o peso ideal usando afórmula
peso = 72.7 * altura - 58 (para homens)
peso = 62.1 * altura - 44.7 (para mulheres).
*/
float pesoIdeal (float a, char b);
int main()
{
    float altura;
    char sexo;
    printf("Digite a altura: ");
    scanf("%f%*c", &altura);
    printf("Digite o sexo (F)eminino ou (M)asculino: ");
    scanf("%c", &sexo);
    while (sexo != 'M' && sexo != 'F')
        scanf("%c", &sexo);
    printf("O peso ideal eh: %.2f", pesoIdeal(altura, sexo));
    return 0;
}
float pesoIdeal (float a, char b) {
    if (b == 'F')
        return ((62.1*a)-44.7);
    if (b == 'M')
        return ((72.7*a)-58);
}
