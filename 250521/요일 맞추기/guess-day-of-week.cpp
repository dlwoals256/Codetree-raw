#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string daySigunature[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int baseDay = d1;
    for (int i = 1; i < m1; i++) {
        baseDay += month[i];
    }

    int day = d2;
    for (int i = 1; i < m2; i++) {
        day += month[i];
    }

    cout << daySigunature[(day - baseDay + 7) % 7];



    return 0;
}