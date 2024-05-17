#include <stdio.h>

int main () {
    static int ar[] = {10, 15, 4, 25, 3, -4};
    int *p;
    p = &ar[2];
    printf("%d", (ar-p));
}