#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = 0, b = 1, c;

    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for(int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}