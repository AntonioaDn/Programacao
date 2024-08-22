#include <bits/stdc++.h>

using namespace std;

int main () {
    int m[3][3];
    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            cin >> m[i][j]; 
        }
    }
    int dp=0, ds=0;
    for (int i=0; i < 3; i++) {
        dp += m[i][i];
        ds += m[i][2-i];
    }
    cout << "Diagonal principal: " << dp << endl;
    cout << "Diagonal secundaria: " << ds << endl;
    
}