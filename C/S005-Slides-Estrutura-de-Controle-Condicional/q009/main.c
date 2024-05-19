/*
Faça um programa que receba como entrada os
coeficientes (a, b, c) de uma equação do 2º grau,
calcule e mostre as raízes desta equação. As raízes
de uma equação do 2º grau são calculadas pela
fórmula onde é o discriminante da equação.
Para esse discriminante há três possíveis situações:
a) Se D < 0 – não há solução real, pois não existe raizquadrada de número negativo;
b) Se D = 0 – há duas soluções iguais: .
c) Se D > 0 – há duas soluções reais e diferentes: x1 ex2.
*/
#include <stdio.h>
#include <math.h>
int main () {
    float a, b, c, raiz, raiz2;
    printf("Digite os valores dos coeficientes a, b e c da equacao: ");
    scanf("%f %f %f", &a, &b, &c);
    float delta = ((b*b) - (4 * a * c));
    if (a != 0) {
        if (delta >= 0) {
            if (delta == 0) {
                raiz = (-b + sqrt(delta))/(2*a);
                printf("So tem uma solucao real.\nRaiz = %.3f\n", raiz);
            } else {
                raiz = (-b + sqrt(delta))/(2 * a);
                raiz2 =  (-b - sqrt(delta))/(2 * a);
                printf("Existem duas raizes reais.\nRaiz 1: %.3f\nRaaiz 2: %.3f", raiz, raiz2);
            }
        } else {
            printf("Nao existem raizes reais.\n");
        }
    } else {
        printf("Nao existem raizes reais.\n");
    }
}