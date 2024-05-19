#include <stdio.h>
int main () {
    double r, pi=3.14159, volume;
    scanf("%lf", &r);
    volume = (4.0/3)*pi*r*r*r;
    printf("VOLUME = %.3lf", volume);
}