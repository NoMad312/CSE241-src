#include <iostream>

using namespace std;

extern int x;

void foo() {
  cout << "x = " << x << '\n';
}
