#include <stdio.h>

int main () {
    int a, b, maior, menor, soma=0;
    while (1) {
        soma=0;
        scanf("%d %d", &a, &b);
        if (b <= 0 || a <= 0) break;
        menor = (a > b) ? b : a;
        maior = (a > b) ? a : b;
        for (int i=menor; i<=maior; i++) {
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);

    } 
}