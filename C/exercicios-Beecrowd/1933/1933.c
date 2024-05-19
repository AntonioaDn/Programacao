#include <stdio.h>
int main () {
    int a, b, c;
    scanf("%d %d", &a, &b);
    if (a == b) 
        printf("%d\n", a);
    else
    if (a > b) 
        printf("%d", a);
    if (b > a) 
        printf("%d", b);
}