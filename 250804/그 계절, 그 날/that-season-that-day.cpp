#include <iostream>

using namespace std;

int Y, M, D;

bool is_leap(int y) {
    bool res = false;
    if (y % 4 == 0) {
        res = true;
        if (y % 100 == 0) {
            res = false;
            if (y % 400 == 0) {
                res = true;
            };
        }
    }

    return res;
}

string season(int m) {
    if (m >= 3 && m <= 5) {
        return "Spring";
    } else if (m >= 6 && m <= 8) {
        return "Summer";
    } else if (m >= 9 && m <= 11) {
        return "Fall";
    } else {
        // m은 season 함수가 실행되었다면 반드시 1 ~ 12 사이이므로 else로 처리할 수 있다.
        return "Winter";
    }
}

bool calender[13][32];
const int lst_day[13] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int main() {
    cin >> Y >> M >> D;

    for (int i = 1; i < 13; i++) {
        for (int j = 1; j <= lst_day[i]; j++) {
            calender[i][j] = true;
        }
        if (i == 2 && is_leap(Y)) {
            calender[i][29] = true;
        }
    }

    if (calender[M][D]) {
        cout << season(M);
    } else {
        cout << -1;
    }

    return 0;
}