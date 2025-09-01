#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int multiple_lcm(int* x, int size) {
    if (size == 1) return x[0];
    int prev = multiple_lcm(x, size-1);
    return lcm(prev, x[size-1]);
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << multiple_lcm(arr, n);

    return 0;
}