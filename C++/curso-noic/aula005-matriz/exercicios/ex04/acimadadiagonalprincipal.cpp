#include <bits/stdc++.h>

using namespace std;

int main () {
    char o;
    float m[12][12];
    cin >> o;
    for (int i=0; i < 12; i++) {
        for (int j=0; j < 12; j++) {
            cin >> m[i][j]; 
        }
    }
    float soma = 0;
    for (int i=0; i < 11; i++) {
        for (int j=i+1; j < 12; j++) {
            soma += m[i][j];
        }
    }
    if (o == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    } else {
        cout << fixed << setprecision(1) << soma/66.0 << endl;
    }
}