#include <stdio.h>
int main () {
    int n, c=0;
    scanf("%d", &n);
    int v[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    for (int i=0; i<n; i++) {
        if (i < n-1 && v[i] != v[i+1]) {
            c++;
        }
    }
    c++;
    printf("%d\n", c);
    return 0;
}