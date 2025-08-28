#include <iostream>

using namespace std;

int N;

int s(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n <= 0) return 0;
    return s(n / 3) + s(n - 1);
}

int main() {
    cin >> N;

    cout << s(N);

    return 0;
}