#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    int somalinha=0, somacoluna=0, somaaux=0;
    int matriz[n][n];
    for (int i=0; i < n; i++) {
        cin >> matriz[0][i];        
        somalinha += matriz[0][i];
    }
    somaaux = somalinha;
    for (int i=1; i < n; i++) {
        somalinha = 0;
        for (int j=0; j < n; j++) {
            somalinha += matriz[i][j];
        }
        if (somalinha != somaaux) { 
            cout << -1 << endl;
            return 0;
        }
    }
}