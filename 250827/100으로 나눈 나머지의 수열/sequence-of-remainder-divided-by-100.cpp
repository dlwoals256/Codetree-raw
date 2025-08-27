#include <iostream>

using namespace std;

int N;

int task(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;
    if (n <= 0) return 0;
    return (task(n-2) * task(n-1)) % 100;
}

int main() {
    cin >> N;

    cout << task(N);

    return 0;
}