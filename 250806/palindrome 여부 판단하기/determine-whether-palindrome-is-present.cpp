#include <iostream>
#include <string>

using namespace std;

string A;

bool is_palindrome(const string* str) {
    for (int i = 0; i < str->length() / 2; i++) {
        if ((*str)[i] != (*str)[str->length()-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> A;

    if (is_palindrome(&A)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}