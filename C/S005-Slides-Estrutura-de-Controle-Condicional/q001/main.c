#include <stdio.h>

int main() {
    int numeroi;
    float numerof;
    printf("Digite um numero: ");
    scanf("%f", &numerof);  
    numeroi = numerof;

    if (numerof != numeroi || numeroi < 0)
        printf("Nao e inteiro positivo. Seu macac burro");
    else
        if (numeroi % 2 == 0)
            printf("O numero e par, obrigado por ser um ser humano normal e digitar um numero.");
        else
            printf("O numero e impar, obrigado por ser um ser humano normal e digitar um numero.");
    return 0;
}
