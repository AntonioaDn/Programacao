#include <stdio.h>
#include <stdlib.h>
/*2. Escreva uma fun��o chamada medidasDoRetangulo que recebeos par�metros b e h
(as medidas em cent�metros dos dois ladosde um ret�ngulo) e devolve, em par�metros, A e P
respectivamente, a �rea (b*h) e o per�metro (2*(b+h)) deste
ret�ngulo.
 Mostre os resultados na fun��o main().*/
void MedidasDoRetangulo (float b, float h, float *A, float *P) {
    *A = b*h;
    *P = 2*(b+h);
}
int main()
{
    float base, altura, Area, Perimetro;
    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    MedidasDoRetangulo(base, altura, &Area, &Perimetro);
    printf("O valor de P eh %.2f e o de A eh %.2f", Perimetro, Area);
    return 0;
}
