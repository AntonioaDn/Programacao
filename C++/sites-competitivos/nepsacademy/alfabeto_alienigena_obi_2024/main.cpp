#include <bits/stdc++.h>

using namespace std;

int main () {
    int k, n;
    char c;
    cin >> k >> n;
    vector<char> v1, v2; // v1 = alfabeto ; v2 = entrada
    for (int i=0; i < k; i++) {
        cin >> c;
        v1.push_back(c);
    }
    for (int i=0; i < n; i++) {
        cin >> c;
        v2.push_back(c);
    }
    for (int i=0; i < n; i++) {
        for (int j=0; j < k+1; j++) {
            if (v1[j] == v2[i]) {
                // Se forem iguais deve-se verificar a prox letra.
                break;
            }
            if (j == k) {
                cout << 'N' << endl;
                return 0;
            }
        }
    }
    cout << 'S' << endl;
    return 0;
    
}