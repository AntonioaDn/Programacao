#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    for (int i=0; i<a; i++) {    
        int x1, y1, x2, y2, x3, y3;
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        float c_ang =(float) (y2 - y1)/(x2 - x1);
        int c_lin = y1 - (c_ang * x1);
        float y_esperado = (x3 * c_ang) + c_lin;
        if (y3 == y_esperado) {
            printf("TOCANDO\n");
        } else if (y3 > y_esperado) {
            printf("ESQUERDA\n");
        } else {
            printf("DIREITA\n");
        }
    }
}