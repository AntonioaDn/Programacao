#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    double num;
    cin >> n;
    // cout << "O número é: " << n << endl;
    vector<double> numeros(n);
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
    // for (int i = 0; i < n; i++) {
    //     cout << numeros[i] << endl;
    // }
    for (int i = 0; i < n; i++) {
        numeros[i] = sqrt(numeros[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(4) << numeros[i] << endl;
    }
    return 0;
}