/*
Dados três valores X, Y e Z, verificar se eles podem ser os
comprimentos dos lados de um triângulo e, se for, verificar
se é um triângulo equilátero, isósceles ou escaleno. Se
eles não formarem um triângulo, escrever a mensagem
“Os valores não formam um triângulo”. Propriedades e
definições:
 Propriedade – o comprimento de cada lado de um
triângulo é menor do que a soma dos comprimentos
dos outros dois lados.
 Definição 1 – chama-se triângulo equilátero o triângulo
que tem os comprimentos dos três lados iguais.
 Definição 2 – chama-se triângulo isósceles o triângulo
que tem os comprimentos de dois lados iguais. Portanto
todo triângulo equilátero é também isósceles.
 Definição 3 – chama-se triângulo escaleno o triângulo
que tem os comprimentos de seus três lados diferentes.
*/
#include <stdio.h>
int main () {
    int x, y, z;
    printf("Digite os valores x y e z: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x < y + z && y < x + z && z < x + y && ((x != 0) && (y != 0) && (z != 0))) {
        if ((x == y ) && (y == z)) {
            printf("Triangulo equilatero.\n");
        } else if ((x == y) || (y == z) || (x == z)) {
            printf("Triangulo isoceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Os lados fornecidos nao formam um triangulo.\n");
    }
} 