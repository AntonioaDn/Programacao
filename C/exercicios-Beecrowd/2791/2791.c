#include <stdio.h>
int main () {
    int N[4];
    scanf("%d %d %d %d", &N[0], &N[1], &N[2], &N[3]);
    for (int i=0; i<4; i++) {
        if (N[i] == 1) {
            printf("%d\n", i+1);
        }
    }
    return 0;
}