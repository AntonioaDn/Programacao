#include <bits/stdc++.h>

using namespace std;

int f91(int n) {
    if (n <= 100) return f91(f91(n + 11));
    return n - 10;
}

int main () {
    int n;
    while(1) {
        cin >> n;
        if (!n) {
            break;
        }
        cout << "f91(" << n << ") = " << f91(n) << endl;
    }
}