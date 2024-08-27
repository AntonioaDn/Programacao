#include <bits/stdc++.h>

using namespace std;

int main () {
    int vetor[3], cont=0;
    int n, aux=0;
    cin >> n;
    for (int i=0; i < 3; i++) {
        cin >> vetor[i];
    }
    if (vetor[0] == 1 && vetor[1] == 0 && vetor[2] == 0) cont++;
    for (int i=0; i < n-3; i++) {
        vetor[0] = vetor[1];
        vetor[1] = vetor[2];
        cin >> vetor[2];
        if (vetor[0] == 1 && vetor[1] == 0 && vetor[2] == 0) cont++;
    }
    cout << cont << endl;
}