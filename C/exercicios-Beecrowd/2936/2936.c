#include <stdio.h>
int main () {
    int Chica=225, v[5], soma=225;
    int v1[5] = {300, 1500, 600, 1000, 150};
    for (int i=0; i<5; i++) {
        scanf("%d", &v[i]);
    }
    for (int i=0; i<5; i++) {
        soma += v1[i]*v[i];
    }
    printf("%d", soma);
}