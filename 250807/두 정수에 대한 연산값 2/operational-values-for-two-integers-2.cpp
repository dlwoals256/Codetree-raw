#include <iostream>

using namespace std;

int a, b;

void init_cond(int* x, int* y) {
    if (*x > *y) {
        *x *= 2;
        *y += 10;
    } else {
        *x += 10;
        *y *= 2;
    }
}

int main() {
    cin >> a >> b;

    init_cond(&a, &b);

    cout << a << ' ' << b;

    return 0;
}