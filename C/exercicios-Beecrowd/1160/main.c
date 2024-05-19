#include <stdio.h>
int main () {
    int n, pa, pb, t=0;
    double g1, g2;
    scanf("%d", &n);
    for (int i=1; i <= n; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while (pa <= pb) {
            pa = pa * (1+(g1/100));
            pb = pb * (1+(g2/100));
            t++;
            if (t > 100) {
                printf("Mais de 1 seculo.\n", t);
                break;
            }
        }
        if (t <= 100)
            printf("%d anos.\n", t);
    }
    return 0;
}
