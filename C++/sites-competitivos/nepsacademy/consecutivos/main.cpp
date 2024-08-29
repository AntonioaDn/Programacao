#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, valor, maiorseq = 1, seqatual = 1;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i=0; i < n; i++) {
        if (i > 0 && v[i - 1] == v[i]) {
            seqatual += 1;
            if (seqatual > maiorseq) maiorseq = seqatual;
        } else if(i > 0) {
            seqatual = 1;
        }
    }
    // Verificação após o loop para garantir que a última sequência seja considerada
    if (seqatual > maiorseq) maiorseq = seqatual;

    cout << maiorseq << endl;
    return 0;
}
