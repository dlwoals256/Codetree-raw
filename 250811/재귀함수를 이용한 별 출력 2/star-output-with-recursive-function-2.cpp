#include <iostream>

using namespace std;

int n;

void pattern(int n) {
    if (n < 1) return;
    pattern(n - 1);
    cout << "* ";
}

void printRow(int n) {
    if (n < 1) return;
    pattern(n);
    cout << '\n';
    printRow(n - 1);
    pattern(n);
    cout << '\n';
}

int main() {
    cin >> n;

    printRow(n);

    return 0;
}