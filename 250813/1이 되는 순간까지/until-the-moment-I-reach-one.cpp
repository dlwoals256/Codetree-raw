#include <iostream>

using namespace std;

int N;

int task(int n, int cnt) {
    if (n <= 1) return cnt;
    int recur = n;
    if (n % 2 == 0) {
        return task(recur / 2, cnt + 1);
    } else {
        return task(recur / 3, cnt + 1);
    }
}

int main() {
    cin >> N;

    cout << task(N, 0);

    return 0;
}