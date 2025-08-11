#include <iostream>

using namespace std;

int N;

void print(int n) {
    if (n < 1) return;
    cout << n << ' ';
    print(n - 1);
    cout << n << ' ';
}

int main() {
    cin >> N;

    print(N);

    return 0;
}