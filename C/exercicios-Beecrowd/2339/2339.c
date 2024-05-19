#include <stdio.h>
int main () {
    int C, P, F;
    scanf("%d %d %d", &C, &P, &F);
    if (P/F >= C) {
        printf("S\n");
    }
    if (P/F < C) {
        printf("N\n");
    }
    return 0;
}