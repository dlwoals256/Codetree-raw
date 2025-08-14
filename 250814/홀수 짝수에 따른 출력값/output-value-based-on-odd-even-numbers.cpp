#include <iostream>

using namespace std;

int N;

int sums(int n) {
    if (n < 0) return 0;
    if (n % 2 == 0) return sums(n - 2) + n;
    else return sums(n - 2) + n;
}

int main() {
    cin >> N;

    cout << sums(N);

    return 0;
}