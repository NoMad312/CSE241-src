#include <iostream>
using namespace std;

unsigned int Factorial( unsigned int number ) {
  return number <= 1 ? number : Factorial(number-1) * number;
}

int main() {
  unsigned int y = Factorial(3);
  cout << "Factorial(3) = " << y << "\n";
}
