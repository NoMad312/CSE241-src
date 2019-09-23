#include <iostream>
#include <string>
using namespace std;

void foo(const string& x) {
  cout << "Hi!\n";
  cout << "I am " << x << "\n";
}

int main(int argc, char* argv[]) {
  if(string(argv[1]) == "trigger") {
    foo(3);
  } else {
    foo(string(argv[1]));
  }
  return 0;
}
