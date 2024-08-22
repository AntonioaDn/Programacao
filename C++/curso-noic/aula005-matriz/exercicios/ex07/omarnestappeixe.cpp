#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    int m[100][100], xi, xf, yi, yf, menorx, maiorx, area=0;
    cin >> xi >> xf >> yi >> yf;
    menorx = xi-1;
    maiorx = xf-1;
    // Preencher as colunas variando de xi ate xf com o yi e yf fixos, com 1's.
    for (int i=xi-1; i <= xf-1; i++) {
        m[yi][i] = 1;
        m[yf][i] = 1;
    }
    for (int i=1; i < n; i++) {
        cin >> xi >> xf >> yi >> yf;
        for (int i=xi-1; i <= xf-1; i++) {
            m[yi][i] = 1;
            m[yf][i] = 1;
        }
        if (menorx > xi) menorx = xi-1;
        if (maiorx < xf) maiorx = xi-1;
    }
    for (int i = menorx; i <= maiorx; i++) {
        int inicio = 0;
        while (m[inicio][i] != 1) inicio++;
        inicio++;
        area++;
        while (m[inicio+1][i] != 1) {
            inicio++;
            area++;
        }
        area++;
    }
    cout << area << endl;
}