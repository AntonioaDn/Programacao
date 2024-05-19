#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    while (n != 0) {
        int v[n], v2[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &v[i]);
            v2[i] = 0;
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (v[i] < v[j]) {
                    v2[i] += 1;
                }
            }
        }
        for (int i=0; i<n; i++) {
            if (v2[i] == 1) {
                printf("%d\n", i+1);
            }
        }
        scanf("%d", &n);
    }
    return 0;
}