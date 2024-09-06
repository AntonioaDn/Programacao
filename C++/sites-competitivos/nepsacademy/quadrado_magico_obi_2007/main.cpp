#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    int m[n][n];
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) 
            cin >> m[i][j];
    }
    int soma=0, somalinha=0, somacoluna=0, somadiagonalp=0, somadiagonals=0;
    for (int i=0; i < n; i++) {
        soma += m[0][i];
    }
    for (int i=0; i < n; i++) {
        somalinha = somacoluna = 0;
        for (int j=0; j < n; j++) {
            somalinha += m[i][j];
            somacoluna += m[j][i];
        }
        if (somalinha != soma || somacoluna != soma) {
            cout << -1 << endl;
            return 0;
        }
        somadiagonalp += m[i][i];
        somadiagonals += m[i][n-i-1];
    }
    if (somadiagonalp != soma || somadiagonals != soma) {
        cout << -1 << endl;
        return 0;
    }
    cout << soma << endl;
}