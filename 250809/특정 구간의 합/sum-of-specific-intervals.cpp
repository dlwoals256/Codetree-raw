#include <iostream>

using namespace std;

int n, m;
int arr[100];

int partial_sum(int a, int b) {
    int idx_a = a - 1;
    int idx_b = b;
    int sum = 0;
    for (int i = idx_a; i < idx_b; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout << partial_sum(a1, a2) << '\n';
    }

    return 0;
}