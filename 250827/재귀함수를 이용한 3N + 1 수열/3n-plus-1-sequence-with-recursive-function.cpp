#include <iostream>

using namespace std;

int n;

int task(int n) {
    if (n <= 1) return 0;
    if (n % 2 == 0) return task(n / 2) + 1;
    else return task(n * 3 + 1) + 1;
}

int main() {
    cin >> n;

    cout << task(n);

    return 0;
}