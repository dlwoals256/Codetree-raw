#include <iostream>

using namespace std;

int n;

void print_col(int n) {
    if (n < 1) return;
    print_col(--n); // n-1번까지 함
    cout << '*';
}

void print_row(int n) {
    int recur = n;
    if (n < 1) return;
    print_row(--recur);
    print_col(n);
    cout << '\n';
}

int main() {
    cin >> n;

    print_row(n);

    return 0;
}