#include <iostream>

using namespace std;

int n, m;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    cin >> n >> m;

    swap(&n, &m);

    cout << n << ' ' << m;
    
    return 0;
}