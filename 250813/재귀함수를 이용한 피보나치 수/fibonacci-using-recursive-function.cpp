#include <iostream>

using namespace std;

int N;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cin >> N;

    cout << fib(N);

    return 0;
}