#include <stdio.h>
#include <stdlib.h>
int fatorial (int a) {
    int produto=1;
    for (int i=1; i <= a; i++) {
        produto = produto * i;
    }
    return produto;
}
void MostraSoma (int a) {
    printf("1 ");
    for (int i=1; i <= a; i++) {
        printf("+ 1/%d! ", i);
    }
}
int main()
{
    int N;
    float soma=1;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &N);
    for (int i=1; i<=N; i++) {
        soma = soma + 1.0/fatorial(i);
    }
    printf("O resultado eh: %f\n", soma);
    MostraSoma (N);
    return 0;
}
