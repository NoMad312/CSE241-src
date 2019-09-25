#include <iostream>

using namespace std;

int main()
{
  int x = 8;
  if (x > 10) {
    cout << "A\n";
  }
  else {
    if (x < 5) {
      cout << "B\n";
    } else {
      if (x > 7) {
        cout << "C\n";
      } else {
        cout << "D\n";
      }
    }
  }

  if (x > 10) {
    cout << "A\n";
  } else if (x < 5) {
    cout << "B\n";
  } else if (x > 7) {
    cout << "C\n";
  } else {
    cout << "D\n";
  }
}
