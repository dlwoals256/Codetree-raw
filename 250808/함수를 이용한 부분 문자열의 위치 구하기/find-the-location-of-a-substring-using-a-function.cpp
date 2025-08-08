#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int find_substr(string str, string pattern) {
    if (str.find(pattern) != string::npos) {
        return str.find(pattern);
    } else {
        return -1;
    }
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << find_substr(text, pattern);

    return 0;
}