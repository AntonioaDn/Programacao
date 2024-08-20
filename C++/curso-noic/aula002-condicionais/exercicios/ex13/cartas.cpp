#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b, c, d;
    cin >> a >> b >> c;
    if (a == b && a != c) cout << c << endl;
    else if (a != b && a != c) cout << a << endl;
    else cout << b << endl;

}