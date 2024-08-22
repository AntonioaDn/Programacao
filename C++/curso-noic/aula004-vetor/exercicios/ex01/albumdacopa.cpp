#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m, x, faltam;
    cin >> n;
    faltam = n;
    int vetor[n];
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (vetor[x-1] != 1) {
            vetor[x-1] = 1;
            faltam -= 1;
        } else continue;
    }
    cout << faltam << endl;
}