#include <iostream>

using namespace std;

int N;

void print(int n) {
    if (n < 1) return;
    cout << "HelloWorld" << '\n';
    print(--n);
}

int main() {
    cin >> N;

    print(N);

    return 0;
}