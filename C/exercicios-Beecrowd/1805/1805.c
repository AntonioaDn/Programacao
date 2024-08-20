#include <stdio.h>

int main () {
    long long x, y;
    scanf("%lld %lld", &x, &y);
    long long soma = (x + y)*(y - x + 1)/(2);
    printf("%lld\n", soma);

    return 0;    
}