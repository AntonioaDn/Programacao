#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> bonecas(n);

    for (int i=0; i < n; i++) {
        cin >> bonecas[i];
    }

    vector<int> bonecas_ordenadas = bonecas;
    sort(bonecas_ordenadas.begin(), bonecas_ordenadas.end());

    vector<int> resposta;

    for (int i=0; i < n; i++) {
        if (bonecas[i] != bonecas_ordenadas[i]) resposta.push_back(bonecas[i]);
    }
    sort(resposta.begin(), resposta.end());

    cout << resposta.size() << endl;

    for ( auto boneca : resposta) {
        cout << boneca << " ";
    }
}