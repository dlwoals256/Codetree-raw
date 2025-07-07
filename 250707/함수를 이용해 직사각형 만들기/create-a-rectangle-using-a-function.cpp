#include <iostream>

using namespace std;

int n, m;

void printCol(int col) {
    for (int i = 0; i < col; i++) {
        cout << "1";
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        printCol(m);
        cout << '\n';
    }

    return 0;
}