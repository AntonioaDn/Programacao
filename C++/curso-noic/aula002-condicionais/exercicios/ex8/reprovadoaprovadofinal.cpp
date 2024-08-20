#include <bits/stdc++.h>

using namespace std;

int main () {
    float n1, n2;
    cin >> n1 >> n2;
    float media = ((n1 * 2) + (n2 * 3))/5;
    if (media < 3) cout << "Reprovado" << endl;
    else if (media < 7) cout << "Final" << endl;
    else cout << "Aprovado" << endl;
}