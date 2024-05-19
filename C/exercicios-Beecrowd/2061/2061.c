#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m;
    char acao[15], fechou[15] = "fechou\n";
    scanf("%d %d", &n, &m);
    getchar();
    for (int i = 0; i < m; i++)
    {
        fgets(acao, 15, stdin);
        for (int j =0; acao[j] != '\0'; j++) {
            if (acao[j] != fechou[j]) {
                n -= 1;
                break;
            }
            if (acao[j+1] == '\0') {
                if (acao[j] == fechou[j]) {
                    n += 1;
                    break;
                }

            }
        }
    }
    printf("%d\n", n);
}