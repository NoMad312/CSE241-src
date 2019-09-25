#include <iostream>

using namespace std;

int main()
{
  int x = 15;
  if (x > 10) {
    if (x > 20)
      cout << "A\n";
  }
  else {
    cout << "B\n";
  }

  if (x > 10) {
    if (x > 20) {
      cout << "C\n";
    } else {
      cout << "D\n";
    }
  }
}
