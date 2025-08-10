#include <iostream>

using namespace std;

int N;


void print_col_asc(int n) {
    int recur = n;
    if (n < 1) return;
    print_col_asc(--recur);
    cout << n << ' ';
}

void print_col_desc(int n) {
    if (n < 1) return;
    cout << n-- << ' ';
    print_col_desc(n);
}

void print_row(int n) {
    print_col_asc(n);
    cout << '\n';
    print_col_desc(n);
}


int main() {
    cin >> N;

    print_row(N);

    return 0;
}