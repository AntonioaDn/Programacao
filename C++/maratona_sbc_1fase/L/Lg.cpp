#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i < n; i++) {
        cin >> v[i];
    }
    for (int i=0; i < n-1; i++) {
        for (int j=i+1; j < n; j++) {
            int indice = 0;
            int aux1 = v[i];
            int aux2 = v[j];
            while(aux1 > 0 && aux2 > 0) {
                if (aux1%2 == 0 && aux2%2 == 1) {
                    v[i] += 1 << indice;
                    v[j] -= 1 << indice;
                }
                aux1 >>= 1;
                aux2 >>= 1;
                indice++;
            }
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i=0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}