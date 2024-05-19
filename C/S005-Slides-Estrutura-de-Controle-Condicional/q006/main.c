/*
Faça um programa que leia a idade de 2 homens e 2
mulheres (considere que a idade dos homens será
sempre diferente, assim como das mulheres). Calcule e
escreva a soma das idades do homem mais velho com a
mulher mais nova, e o produto das idades do homem
mais novo com a mulher mais velha.
*/
#include <stdio.h>
int main () {
    int h1, h2, m1, m2;
    printf("Digite a idade de dois homens e de duas mulheres: ");
    scanf("%d %d %d %d", &h1, &h2, &m1, &m2);
    int hv, hn, mv, mn;
    if (h1 > h2) {
        hv = h1;
        hn = h2;
    } else {
        hv = h2;
        hn = h1;
    }
    if (m1 > m2) {
        mv = m1;
        mn = m2;
    } else {
        mv = m2;
        mn = m1;
    }
    printf("Soma do homem mais velho (%d) com a mulher mais nova (%d): %d\n", hv, mn, hv+mn);
    printf("Multiplicacao do homem mais novo (%d) com a mulher mais velha (%d): %d\n", hn, mv, hn*mv);
}