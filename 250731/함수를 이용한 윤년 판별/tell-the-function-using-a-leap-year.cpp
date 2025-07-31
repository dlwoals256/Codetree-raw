#include <iostream>

using namespace std;

int y;

bool isLeap(int x) {
    bool leap = false;
    if (x % 4 == 0) leap = true;
    if (x % 100 == 0 && x % 400) leap = false;

    return leap;
}

int main() {
    cin >> y;

    if (isLeap(y)) cout << "true";
    else cout << "false";

    return 0;
}