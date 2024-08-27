// Problema 1244 do Beecrowd
#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    string linha;
    vector<string> palavras;

    for (int i=0; i < n; i++) {
        getline(cin, linha);
        string palavra;
        stringstream ss(linha);
        string palavra;
        while (ss >> palavra) {
            palavras.push_back(palavra);            
        }
        
    }
    
}