#include <bits/stdc++.h>

using namespace std;

int main () {
    int vetord[31], vetore[31], n, t, pares=0;
    char l;
    cin >> n;
    for (int i=0; i < 31; i++) {
        vetord[i] = 0;
        vetore[i] = 0;
    }
    for (int i=0; i < n; i++) {
        cin >> t;
        cin.ignore();
        cin >> l;
        if (l == 'D') vetord[t-30] += 1;
        else vetore[t-30] += 1; 
    }
    for (int i=0; i < 31; i++) {
        if (vetord[i] > vetore[i]) {
            pares += vetore[i];
        } else {
            pares += vetord[i];
        }
    }

    cout << pares << endl;
}