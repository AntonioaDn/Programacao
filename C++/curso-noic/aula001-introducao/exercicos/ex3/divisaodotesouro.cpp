#include <bits/stdc++.h>

using namespace std;

int main () {
    int moedas, marinheiros;
    cin >> moedas >> marinheiros;
    int capitao = ((moedas)/(marinheiros+2)) * 2;
    cout << capitao << endl;
}