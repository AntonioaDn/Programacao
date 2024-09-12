#include <bits/stdc++.h>

using namespace std;

void printa_divisores(int n, int i) {
    // Condicao de parada eh quando o i fica maior que a raiz do numero
    if (i * i > n) {
        return;
    } else if (n % i == 0 && n/i != i) {
        cout << i << " ";
        printa_divisores(n, i+1);
        cout << " " << n/i;
    } else if (n % i == 0 && n/i == i) {
        cout << i << " ";
        return;
    } else {
        printa_divisores(n, i+1);
    }
}

int main () {
    int n, i=1;
    cin >> n;
    printa_divisores(n, 1);
}