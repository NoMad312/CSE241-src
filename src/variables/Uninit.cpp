#include <iostream>

using namespace std;

void foo() {
  int foo_x = 123;
}

void bar() {
  int bar_x;
  int bar_y = bar_x + 2;

  cout << "bar_y = " << bar_y << "\n";  
}

int main() {
  foo();
  bar();
}
