#include <stdio.h>

int main () {
    long double patinhos = 0;
    while(patinhos != -1) {
        scanf("%llf", &patinhos);
        if (patinhos > 0) {
            printf("%.0llf\n", patinhos-1);
        } else if (patinhos == 0) {
            printf("%.0llf\n", patinhos);
        }
    }
}