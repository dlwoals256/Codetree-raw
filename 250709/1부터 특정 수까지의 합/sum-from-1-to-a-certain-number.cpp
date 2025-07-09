#include <iostream>

using namespace std;

int N;

int divSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum / 10;
}

int main() {
    cin >> N;

    cout << divSum(N);

    return 0;
}