#include <stdio.h>
#include <stdlib.h>
int maior (int n1, int n2);
int main()
{
    int n1, n2, nmaior;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    nmaior = maior(n1, n2);
    printf("O maior eh: %d", nmaior);

    return 0;
}
int maior (int n1, int n2) {
    if (n1 > n2)
        return n1;
    else
        return n2;
}
