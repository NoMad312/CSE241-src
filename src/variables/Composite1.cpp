#include <iostream>

using namespace std;

struct Date
{
  int month;
  int day;
  int year;
};

void printDate(const Date& date) {
  cout << date.month << '/' << date.day << '/' << date.year << '\n';
}

int main() {
  Date today = {9, 25, 2019};

  Date tomorrow = today;
  // TODO: fixme: consider February and leap years
  if (today.day < 30) {
    tomorrow.day += 1;
  } if (today.day == 30) {
    if (today.month == 1 || today.month == 3 || today.month == 5 || today.month == 7
        || today.month == 8 || today.month == 10 || today.month == 12) {
      tomorrow.day += 1;
    } else {
      tomorrow.day = 1;
      // TODO: fixme: consider December
      tomorrow.month += 1;
    }
  }

  printDate(tomorrow);
}
