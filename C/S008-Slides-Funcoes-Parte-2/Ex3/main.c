#include <stdio.h>
#include <stdlib.h>
/*3. Altere a fun��o anterior para que al�m de devolver os
par�metros A e P, respectivamente a �rea e o per�metro deste
ret�ngulo, retorne 1 caso o ret�ngulo seja um quadrado, ou 0
caso contr�rio.*/
int ValorDeRetorno = 0;
void MedidasDoRetangulo (float b, float h, float *A, float *P) {
    *A = b*h;
    *P = 2*(b+h);
    if (b == h)
        ValorDeRetorno=1;
    else
        ValorDeRetorno=0;
}
int main()
{
    float base, altura, Area, Perimetro;
    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    MedidasDoRetangulo(base, altura, &Area, &Perimetro);
    printf("O valor de P eh %.2f e o de A eh %.2f", Perimetro, Area);
    return ValorDeRetorno;
}
