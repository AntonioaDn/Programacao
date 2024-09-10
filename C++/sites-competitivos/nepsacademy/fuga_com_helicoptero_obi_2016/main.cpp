#include <bits/stdc++.h>

using namespace std;

int main () {
    int h, p, f, d;
    cin >> h >> p >> f >> d;
    if (d == 1) {
        int i=f;
        while(1) {
            if (i == p || i == h) break;
            i++;
            if (i == 16) i = 0;
        }
        cout << (i == h ? "S" : "N") << endl;
        return 0;
    } else {
        int i=f;
        while(1) {
            if (i == p || i == h) break;
            i--;
            if (i == -1) i = 15;
        }
        cout << (i == h ? "S" : "N") << endl;
        return 0;
    }
}