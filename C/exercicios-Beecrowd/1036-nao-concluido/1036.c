#include <stdio.h>
#include <math.h>
int main () {
    double a, b, c, delta, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a ==0) {
        printf("Impossivel calcular\n");
    }
    delta = ((b*b)-4*a*c);
    if (delta < 0) {
        printf("Impossivel calcular\n");
    }
    r1 = ((-b + pow(delta, 1.0/2)/(2*a)));
    r2 = ((-b - pow(delta, 1.0/2)/(2*a)));
    printf("R1 = %.5lf", r1);
    printf("R2 = %.5lf", r2);
    return 0;
}