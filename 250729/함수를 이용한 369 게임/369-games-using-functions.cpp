#include <iostream>

using namespace std;

int a, b;

bool is369Inside(int n) {
    int num = n;
    for (int i = 0; i < 7; i++) {
        if ((num % 10) == 3 || (num % 10) == 6 || (num % 10) == 9)
            return true;
        num /= 10;
    }
    return false;
}

bool isNumberMeets(int n) {
    return (n % 3 == 0) || is369Inside(n);
}

int main() {
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (isNumberMeets(i))
            cnt++;
    }

    cout << cnt;

    return 0;
}