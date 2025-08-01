#include <iostream>

using namespace std;

int a;
int c;
char o;

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

int div_(int x, int y) {
    return x / y;
}

int main() {
    cin >> a >> o >> c;

    if (o == '+') {
        cout << a << ' ' << o << ' ' << c << " = " << add(a, c);
    } else if (o == '-') {
        cout << a << ' ' << o << ' ' << c << " = " << sub(a, c);
    } else if (o == '*') {
        cout << a << ' ' << o << ' ' << c << " = " << mul(a, c);
    } else if (o == '/') {
        cout << a << ' ' << o << ' ' << c << " = " << div_(a, c);
    } else {
        cout << "False";
    }

    return 0;
}