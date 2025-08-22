#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int strstr(string str, string substr) {
    for (int i = 0; i < str.size(); i++) {
        if (substr[0] == str[i]) {
            for (int j = 0; j < substr.size(); j++) {
                if (substr[j] != str[i + j]) break;
                if (j == substr.size() - 1) {
                    return i;
                }
            }
        }
    }

    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << strstr(text, pattern);

    return 0;
}