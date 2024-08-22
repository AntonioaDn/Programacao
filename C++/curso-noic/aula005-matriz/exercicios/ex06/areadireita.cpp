#include <bits/stdc++.h>

using namespace std;

int main () {
    char o;
    float m[12][12];
    cin >> o;
    for (int i=0; i < 12; i++) {
        for (int j=0; j < 12; j++) {
            cin >> m[i][j]; 
        }
    }
    float soma = 0;
    // Nesse caso o i eh a coluna e o j a linha
    for (int i=7; i < 12; i++) {
        for (int j=12-i; j < i; j++) {
            soma += m[j][i];
        }
    }
    if (o == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    } else {
        cout << fixed << setprecision(1) << soma/30.0 << endl;
    }
}