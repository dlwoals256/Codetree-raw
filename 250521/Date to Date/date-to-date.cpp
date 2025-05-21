#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day = 0;

    for (int i = m1; i < m2; i++) {
        day += month[i];
    }

    day += d2 - d1 + 1;

    cout << day;

    return 0;
}