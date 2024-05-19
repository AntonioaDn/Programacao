#include <stdio.h>
#include <stdlib.h>
int Paridade(int n1) {
    if (n1%2==0)
        return 0;
    else
        return 1;
}
int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    int resultado = Paridade(n);
    if (resultado == 0)
        printf("eh par\n");
    else
        printf("eh impar\n");

    return 0;
}
