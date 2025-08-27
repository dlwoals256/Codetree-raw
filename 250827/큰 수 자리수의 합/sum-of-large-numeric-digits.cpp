#include <iostream>

using namespace std;

int a, b, c;

int digit(int x) {
    if (x <= 0) return 0;
    return digit(x / 10) + x % 10;
}

int main() {
    cin >> a >> b >> c;

    cout << digit(a*b*c);

    return 0;
}