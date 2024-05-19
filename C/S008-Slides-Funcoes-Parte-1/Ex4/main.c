#include <stdio.h>
#include <stdlib.h>

void Funcao (char c, int n);

int main()
{
    char a;
    int n;
    printf("Digite um caracter e o numero de linhas que vao ser escritas: ");
    scanf("%c %d", &a, &n);
    Funcao(a, n);
    return 0;
}

void Funcao (char c, int n) {
    for (int i=1; i <= n; i++) {
        for (int i=1; i <= 50; i++) {
            printf("%c", c);
        }
        printf("\n");
    }
}
