#include <bits/stdc++.h>

using namespace std;

int main () {
    long kms;
    cin >> kms;
    if (kms % 8 == 6) cout << 1 << endl;
    if (kms % 8 == 7) cout << 2 << endl;
    if (kms % 8 == 0) cout << 3 << endl;
}