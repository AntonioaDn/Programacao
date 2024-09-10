#include <bits/stdc++.h>

using namespace std;

int main () {
    int t, si, n;
    cin >> t >> si >> n;
    vector<int> intervalos(n);
    for (int i = 0; i < n; i++) {
        cin >> intervalos[i];
    }

    int i=0, sf=si;
    while (i < n-1) {
        sf = sf - (intervalos[i+1] - intervalos[i]);
        if (sf < 0) {
            sf = si;
            i++;
            continue;
        }
        sf = si - sf;
        i++;
    }
    sf = sf - (t - intervalos[i]);
    if (sf < 0) sf = 0;
    cout << sf << endl;
    return 0;
}