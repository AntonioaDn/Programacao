#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, bombas=0;
    cin >> n;
    int vetor[n];
    for (int i=0 ; i < n; i++) {
        cin >> vetor[i];
    }
    for (int i=0; i < n; i++) {
        bombas = 0;
        if (i > 0 || i < n-1) {
            for (int j = i-1; j < i+2; j++) {
                if (vetor[j] == 1) {
                    bombas += 1;
                }
            }
            cout << bombas << endl;
        } else {
            if (i == 0) {
                for (int j=0; j < 2; j++) {
                    if (vetor[j] == 1) {
                        bombas += 1;
                    }
                }
            } else {
                for (int j = 0; j < 2; j++) {
                    if (vetor[n-j-1] == 1) {
                        bombas += 1;
                    }
                }
            }
            cout << bombas << endl;
        }
    }
}