#include <iostream>
using namespace std;

int m1, d1, m2, d2;
string A;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int start = d1;
    for (int i = 1; i < m1; i++) {
        start += month[i];
    }
    
    int end = d2;
    for (int i = 1; i < m2; i++) {
        end += month[i];
    }
    
    int total_days = end - start + 1;

    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int target = 0;
    for (int i = 0; i < 7; i++) {
        if (week[i] == A) {
            target = i;
            break;
        }
    }

    int answer = total_days / 7;
    if (total_days % 7 > 0) {
        int remain = total_days % 7;
        if (target < remain) answer++;
    }

    cout << answer;

    return 0;
}
