#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int baseDay = d1;
    for (int i = 1; i < m1; i++) {
        baseDay += month[i];
    }

    int day = d2;
    for (int i = 1; i < m2; i++) {
        day += month[i];
    }

    if (((day - baseDay) % 7 + 7) % 7 == 0) {
        cout << "Mon";
    } else if (((day - baseDay) % 7 + 7) % 7 == 1) {
        cout << "Tue";
    } else if (((day - baseDay) % 7 + 7) % 7 == 2) {
        cout << "Wed";
    } else if (((day - baseDay) % 7 + 7) % 7 == 3) {
        cout << "Thu";
    } else if (((day - baseDay) % 7 + 7) % 7 == 4) {
        cout << "Fri";
    } else if (((day - baseDay) % 7 + 7) % 7 == 5) {
        cout << "Sat";
    } else if (((day - baseDay) % 7 + 7) % 7 == 6) {
        cout << "Sun";
    }

    return 0;
}