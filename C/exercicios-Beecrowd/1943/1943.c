#include <stdio.h>
int main () {
    int N, v[7] = {1, 3, 5, 10, 25, 50, 100};
    scanf("%d", &N);
    for (int i=0; i<7; i++) {
        if (N <= v[i]) {
            printf("Top %d\n", v[i]);
            break;
        }
    }
    return 0;
}