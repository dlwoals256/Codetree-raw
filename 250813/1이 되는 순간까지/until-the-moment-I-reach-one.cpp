#include <iostream>

using namespace std;

int N;

// 처음 풀이
int task(int n, int cnt) {
    if (n <= 1) return cnt;
    int recur = n;
    if (n % 2 == 0) {
        return task(recur / 2, cnt + 1);
    } else {
        return task(recur / 3, cnt + 1);
    }
}

int task2(int n) {
    if (n <= 1) return 0;
    if (n % 2 == 0) {
        return task2(n / 2) + 1;
    } else {
        return task2(n / 3) + 1;
    }
}

int main() {
    cin >> N;

    cout << task2(N);

    return 0;
}