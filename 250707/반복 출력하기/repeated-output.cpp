#include <iostream>

using namespace std;

int N;

void print_dummy(int n) {
    for (int i = 0; i < n; i++) {
        cout << "12345^&*()_" << '\n';
    }
}

int main() {
    cin >> N;

    print_dummy(N);

    return 0;
}