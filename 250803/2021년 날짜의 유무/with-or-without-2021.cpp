#include <iostream>

using namespace std;

int M, D;
bool calendar[13][32] = {};
const int month_last[13] = {
  0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

void init_calendar() {
  for (int m = 1; m <= 12; m++) {
    for (int d = 1; d <= month_last[m]; d++) {
      calendar[m][d] = true;
    }
  }
}

bool is_date_valid(int m, int d) {
  if (m > 12 || m < 1) return false;
  if (d > 31 || d < 1) return false;
  return calendar[m][d];
}

int main() {
  cin >> M >> D;

  init_calendar();
  if (is_date_valid(M, D)) cout << "Yes";
  else cout << "No";

  return 0;
}