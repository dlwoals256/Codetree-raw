#include <iostream>

using namespace std;

int N;

int sum_recur(int n) {
    if (n < 1) return 0;
    return n + sum_recur(n - 1);
}

int main() {
    cin >> N;

    cout << sum_recur(N);

    return 0;
}