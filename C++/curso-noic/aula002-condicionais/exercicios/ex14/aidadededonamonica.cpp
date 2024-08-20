#include <bits/stdc++.h>

using namespace std;

int main () {
    int idade, a, b;
    cin >> idade >> a >> b;
    int c = idade - a - b;
    if (a >= b && a >= c) cout << a << endl;
    else if (b >= a && b >= c) cout << b << endl;
    else cout << c << endl;

}