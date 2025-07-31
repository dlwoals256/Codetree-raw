#include <iostream>

using namespace std;

int a, b;

bool isPrime(int x) {
    bool prime = true;

    for (int i = 2; i < x; i++) 
        if (x % i == 0)
            prime = false;

    return prime;
}

int main() {
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) sum += i;
    }

    cout << sum;

    return 0;
}