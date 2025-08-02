#include <iostream>

using namespace std;

int a, b;

bool isPrime(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

bool isEven(int x) {
    int dig = x;
    int sum = 0;
    while (dig > 0) {
        sum += dig % 10;
        dig /= 10;
    }

    if (sum % 2 != 0) return false;

    return true;
}

int main() {
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && isEven(i)) cnt++;
    }

    cout << cnt;

    return 0;
}