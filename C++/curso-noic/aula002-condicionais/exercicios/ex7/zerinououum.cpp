#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && a == c) cout << '*' << endl;
    if (a != b && a != c) cout << 'A' << endl;
    if (a != b && a == c) cout << 'B' << endl;
    if (a == b && a != c) cout << 'C' << endl;

}