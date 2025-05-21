#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    const int base = 11 + 11 * 60 + 11 * 24 * 60;
    const int inp = c + b * 60 + a * 24 * 60;

    if (base > inp) {
        cout << -1;
    } else {
        cout << inp - base;
    }

    return 0;
}