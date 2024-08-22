#include <bits/stdc++.h> 

using namespace std;

int main () {
    string nome, vogais="", consoantes="";
    cin >> nome;
    for (int i=0; i < nome.size(); i++) {
        if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u') {
            vogais += nome[i];
        } else {
            consoantes += nome[i];
        }
    }
    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;
}