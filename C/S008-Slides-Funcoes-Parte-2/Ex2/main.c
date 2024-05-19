#include <stdio.h>
#include <stdlib.h>
/*2. Escreva uma função chamada medidasDoRetangulo que recebeos parâmetros b e h
(as medidas em centímetros dos dois ladosde um retângulo) e devolve, em parâmetros, A e P
respectivamente, a área (b*h) e o perímetro (2*(b+h)) deste
retângulo.
 Mostre os resultados na função main().*/
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
