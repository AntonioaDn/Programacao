#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;

    // Entrada de três números
    cin >> a >> b >> c;

    // Variáveis para armazenar os índices dos números ordenados
    int maior, meio, menor;

    // Comparações para ordenar os números e determinar as posições
    if (a >= b && a >= c) {
        maior = 1;
        if (b >= c) {
            meio = 2;
            menor = 3;
        } else {
            meio = 3;
            menor = 2;
        }
    } else if (b >= a && b >= c) {
        maior = 2;
        if (a >= c) {
            meio = 1;
            menor = 3;
        } else {
            meio = 3;
            menor = 1;
        }
    } else {
        maior = 3;
        if (a >= b) {
            meio = 1;
            menor = 2;
        } else {
            meio = 2;
            menor = 1;
        }
    }

    // Exibindo as posições dos números ordenados
    cout << menor << endl << meio << endl << maior << endl;

    return 0;
}
