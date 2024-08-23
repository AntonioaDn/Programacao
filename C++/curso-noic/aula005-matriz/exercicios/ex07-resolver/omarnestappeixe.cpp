#include <bits/stdc++.h>

using namespace std;

#define MAX 101


int main () {
    int matriz[MAX][MAX] = {0};
    int n, xi, xf, yi, yf, area=0;
    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> xi >> xf >> yi >> yf;
        for (int x=xi; x < xf; x++) {
            for (int y=yi; y < yf; y++) {
                matriz[x][y] = 1;
            }
        }
    }
    for (int i=0; i < MAX-1; i++) {
        for (int j=0; j < MAX-1; j++) {
            if (matriz[i][j]) area++;
        }
    }
    cout << area << endl;
}