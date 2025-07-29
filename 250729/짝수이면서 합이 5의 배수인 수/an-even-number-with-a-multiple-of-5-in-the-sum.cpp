#include <iostream>

using namespace std;

int n;

string isNumMeets(int n) {
    int dig10 = n / 10;
    int dig1 = n % 10;

    if (n % 2 == 0)
        if ((dig1 + dig10) % 5 == 0)
            return "Yes";
    
    return "No";
}

int main() {
    cin >> n;

    cout << isNumMeets(n);

    return 0;
}