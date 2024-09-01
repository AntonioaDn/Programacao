#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, indice;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i=0; i < n-1; i++) {
        for (int j=i+1; j < n; j++) {
            indice = 0;
            int aux1, aux2;
            aux1 = v[i];
            aux2 = v[j];
            while(aux1 > 0 && aux2 > 0) {
                if (aux1%2 == 0 && aux2%2 == 1) {
                    v[i] += pow(2, indice);
                    v[j] -= pow(2, indice);
                }
                aux1 /= 2;
                aux2 /= 2;
                indice++;
            }
        }
    sort(v.begin(), v.end(), greater<int>());
    }
    for (int i=0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}