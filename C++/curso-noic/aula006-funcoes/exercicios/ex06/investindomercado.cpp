#include <bits/stdc++.h>

using namespace std;

int qnts_acoes(int n, int k) {
    if(n <= k) return 1;
    int prox_par, prox_impar;
    if (n%2 == 0) {
        prox_impar = n/2;
        prox_par = prox_impar;
    } else {
        prox_impar = (n/2) + 1;
        prox_par = prox_impar - 1;
    }
    return qnts_acoes(prox_impar, k) + qnts_acoes(prox_par, k);
}

int main () {
    int n, k;
    while(1) {
        cin >> n >> k;
        if (n == k && n == 0) break;
        cout << qnts_acoes(n, k) << endl;
    }
}