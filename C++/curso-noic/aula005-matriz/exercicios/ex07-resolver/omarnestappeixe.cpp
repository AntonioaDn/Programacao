#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m[100][100] = {0}, pos[2][2], xi, xf, yi, yf, maiorx, menorx;
    cin >> n;
    for (int i=0; i < 100; i++) {
        for (int j=0; j < 100; j++) {
            m[i][j] = 0;
        }
    }

    for (int i=0; i < n; i++) {
        if (i==0) {
            cin >> xi >> xf >> yi >> yf;
            for (int z=xi-1; z <= xf-1; z++) {
                m[yi-1][z] = 1;
                m[yf-1][z] = 1;
            }
            maiorx = xf-1;
            menorx = xi-1;
        } else {
            cin >> xi >> xf >> yi >> yf;
            for (int z=xi-1; z <= xf-1; z++) {
                m[yi-1][z] = 1;
                m[yf-1][z] = 1;
            }
            if (maiorx < xf-1) maiorx = xf-1;
            if (menorx > xi-1) menorx = xi-1;
        }
    }
    int area = 0;
    for (int i=menorx; i <= maiorx; i++) {
        int inicio, final, indice=0;
        while (m[indice][i] != 1) indice++;
        inicio = indice + 1;
        indice = inicio;
        while (indice < 100){
            if (m[indice][i] == 1) {
                final = indice;
            }
            indice++;
        }
        area += final - inicio + 1;
    }
    cout << area << endl;
    ///////////////////////////
    cout << "[" << endl;
    for (int i=0; i < 20; i++) {
        for (int j=0; j < 20; j++) {
            cout << m[i][j] << ", ";
        }
        cout << endl;
    }
    cout << "]";
    ///////////////////////////
}