#include <iostream>

using namespace std;

int n;
int arr[100] = {1, 5, 7, 9, 2, 6};

int max_(int* x, int size) {
    if (size == 1) return *x;
    int partial_max = max_(x+1, size-1);
    return (*x > partial_max) ? *x : partial_max;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << max_(arr, n);

    return 0;
}