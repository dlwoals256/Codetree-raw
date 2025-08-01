#include <iostream>

using namespace std;

int a, b;

int pow(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

int main() {
    cin >> a >> b;

    cout << pow(a, b);

    return 0;
}