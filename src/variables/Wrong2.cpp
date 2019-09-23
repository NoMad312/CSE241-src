#include <iostream>
#include <string>
using namespace std;

void foo(const string& x) {
  cout << "Hi!\n";
  cout << "I am " << x << "\n";
}

int main() {
  foo(3);
  // foo(" a student"); // this works;
  return 0;
}
