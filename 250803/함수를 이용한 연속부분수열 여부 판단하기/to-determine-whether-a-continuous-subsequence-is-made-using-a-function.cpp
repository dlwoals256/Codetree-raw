#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool is_sequence(int* x, int* y) {
    int res = true;
    for (int i = 0; i < n1; i++) {
        if (x[i] == y[0]) {
            for (int j = 0; j < n2; j++) {
                if (x[i+j] != y[j]) {
                    res = false;
                    break;
                } else {
                    res = true;
                }
            }
        }
    }

    return res;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    if (n1 > n2 && is_sequence(a, b)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}