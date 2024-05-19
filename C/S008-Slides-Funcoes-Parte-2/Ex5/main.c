#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 5.
. Escreva uma função que recebe por parâmetro um valor inteiro e
positivo N e retorna o valor de S. Escreva também uma função
para mostrar a sequência no formato apresentado abaixo.
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(N2
+1)/(N+3)
*/
double SomaMaluca (int a) {
    int x=0, y=0;
    double z=0;
    for (int i=1; i<=a; i++) {
            x = (i*i)+1;
            y = i+3;
            z += x/y;
    }
    return z;
}
void SequenciaMaluca (int N) {
    int x=0, y=0;
    for (int i=1; i<=N; i++) {
            x = (i*i)+1;
            y = i+3;
            if (i == 1)
                printf("%d/%d", x, y);
            if (i != 1)
                printf(" + %d/%d", x, y);
    }
}
int main()
{
    int num;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);
    SequenciaMaluca(num);
    printf("\nO resultado eh: %.lf", SomaMaluca(num));
    return 0;
}
