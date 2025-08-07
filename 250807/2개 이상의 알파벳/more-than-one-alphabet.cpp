#include <iostream>
#include <string>

using namespace std;

string A;

bool cmp_alpha(const string* str) {
    char tmp = (*str)[0];
    for (int i = 1; i < str->length(); i++) {
        if ((*str)[i] != tmp) return true;
    }
    return false;
}

int main() {
    cin >> A;

    if (cmp_alpha(&A)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}