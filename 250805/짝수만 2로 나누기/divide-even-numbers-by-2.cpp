#include <iostream>

using namespace std;

int n;
int arr[50];

void div_even(int* ar) {
    for (int i = 0; i < n; i++) {
        if (*(ar + i) % 2 == 0) {
            *(ar + i) /= 2;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    div_even(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}