#include <iostream>

using namespace std;

int n, m;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }

    int r = x % y;

    return gcd(y, r);
}

int main() {
    cin >> n >> m;

    cout << n*m / gcd(n, m);

    return 0;
}