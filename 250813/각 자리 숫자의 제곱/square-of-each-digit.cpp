#include <iostream>

using namespace std;

int N;

int square_sum(int n) {
    if (n < 10) return n * n;
    return square_sum(n / 10) + (n % 10) * (n % 10);
}

int main() {
    cin >> N;

    cout << square_sum(N);

    return 0;
}