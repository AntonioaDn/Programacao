#include <bits/stdc++.h> 

using namespace std;

int main () {
    float n1, n2;
    cin >> n1 >> n2;
    float media = (n1 + n2)/2;
    if (media >= 7) cout << "Aprovado" << endl;
    else if (media >= 4) cout << "Recuperacao" << endl;
    else cout << "Reprovado" << endl;
}