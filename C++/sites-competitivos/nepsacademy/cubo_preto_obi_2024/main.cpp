#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    int total_cubinhos = n * n * n;
    int zero_f, uma_f, duas_f, tres_f=8;
    duas_f = (n-2) * 12;
    uma_f = (n - 2) * (n-2) * 6;
    zero_f = total_cubinhos - uma_f - duas_f - tres_f;
    cout << zero_f << endl;
    cout << uma_f << endl;
    cout << duas_f << endl;
    cout << tres_f << endl;
}