#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int fibo_calls(int n) {
    if (n <= 1) return 0;
    else if (n == 2) return 2;
    return 2 + fibo_calls(n-1) + fibo_calls(n-2);
}

int main () {
    int n;
    cin >> n;
    for (int i=0; i < n; i++) {
        int entrada;
        cin >> entrada;
        cout << "fib(" << entrada << ") = " << fibo_calls(entrada) << " calls = " << fibonacci(entrada) << endl;
    } 
}