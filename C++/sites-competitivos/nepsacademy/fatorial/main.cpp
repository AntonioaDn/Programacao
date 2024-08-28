#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, fat=1;
    cin >> n;
    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }
    for (int i=n; i >= 1; i--) {
        fat *= i;
    } 
    cout << fat << endl;
    return 0;
}