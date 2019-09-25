#include <iostream>
#include <string>

using namespace std;

int main() {
  char c1 = 'A';
  char c2 = "A"; // A single string is not considered a character.
  string s = "str";

  cout << "c1 = " << c1 << '\n';
  cout << "s = " << s << '\n';

  return 0;
}
