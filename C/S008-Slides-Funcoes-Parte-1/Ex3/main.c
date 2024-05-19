#include <stdio.h>
#include <stdlib.h>
int Maiordtres(int n1, int n2, int n3);
int maior (int n1, int n2);
int main() {
    int n1, n2, n3;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("O maior eh: %d", Maiordtres(n1, n2, n3));

    return 0;
}
int Maiordtres(int n1, int n2, int n3) {
    return maior(maior(n1, n2), n3);
}
int maior (int n1, int n2){
    if (n1 > n2)
        return n1;
    else
        return n2;

}

