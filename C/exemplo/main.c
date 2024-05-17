#include <stdio.h>
#include <stdlib.h>

int main () {
    int a = 10;
    int *p = &a;
    printf("Valor de a: %d\n", a);
    *p = *p + 2;
    printf("Valor de a: %d\n", a);
}