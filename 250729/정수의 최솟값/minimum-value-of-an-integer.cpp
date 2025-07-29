#include <iostream>

using namespace std;

int a, b, c;

int min(int a, int b, int c) {
    int m = a;
    if (b < m)
        m = b;
    if (c < m)
        m = c;

    return m;
}

int main() {
    cin >> a >> b >> c;

    cout << min(a, b, c);

    return 0;
}