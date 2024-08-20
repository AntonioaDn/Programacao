#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, a, b;
    char operacao;
    cin >> n;
    cin >> a;
    cin.ignore();
    cin >> operacao;
    cin.ignore();
    cin >> b;
    if (operacao == '+') {
        if (a + b <= n) cout << "OK" << endl;
        else cout << "OVERFLOW" << endl;
    } else {
        if (a * b <= n) cout << "OK" << endl;
        else cout << "OVERFLOW" << endl;        
    }

}