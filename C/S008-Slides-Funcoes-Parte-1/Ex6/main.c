#include <stdio.h>
#include <stdlib.h>
float LadoTriangulo (float a, float b, float c);
int main()
{
    float a, b, c;
    printf("Digite tres valores para lados de triangulos: ");
    scanf("%d %d %d", &a, &b, &c);
    if (LadoTriangulo(a, b, c) == 0)
        printf("O triangulo eh equilatero.");
    if (LadoTriangulo(a, b, c) == 1)
        printf("O triangulo eh isoceles.");
    if (LadoTriangulo(a, b, c) == 2)
        printf("O triangulo eh escaleno.");
    return 0;
}
float LadoTriangulo (float a, float b, float c){
    if (a == b && a == c)
        return 0;
    else
        if (a==b || a==c || b==c)
            return 1;
        else
            return 2;
}
