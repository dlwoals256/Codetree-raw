#include <iostream>
using namespace std;

int main() {
  int m1, d1, m2, d2;
  string A;

  cin >> m1 >> d1 >> m2 >> d2;
  cin >> A;

  int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  int days1 = d1;
  for (int i = 1; i < m1; i++) {
      days1 += month[i];
  }
  
  int days2 = d2;
  for (int i = 1; i < m2; i++) {
      days2 += month[i];
  }
  
  int dayToNum;
  if (A == "Mon") dayToNum = 0;
  else if (A == "Tue") dayToNum = 1;
  else if (A == "Wed") dayToNum = 2;
  else if (A == "Thu") dayToNum = 3;
  else if (A == "Fri") dayToNum = 4;
  else if (A == "Sat") dayToNum = 5;
  else if (A == "Sun") dayToNum = 6;
  
  int dayOfWeek1 = (days1 - 1) % 7;
  
  int daysUntilFirst = (dayToNum - dayOfWeek1 + 7) % 7;
  
  int firstOccurrence = days1 + daysUntilFirst;
  
  if (firstOccurrence > days2) {
      cout << 0;
      return 0;
  }
  
  int count = (days2 - firstOccurrence) / 7 + 1;
  
  cout << count;
  return 0;
}
