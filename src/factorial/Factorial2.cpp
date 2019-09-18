#include <iostream>
using namespace std;

unsigned int Factorial( unsigned int number ) {
  return number <= 1 ? number : Factorial(number-1) * number;
}

int main() {
  int x;
  cout << "Enter an integer: ";
  cin >> x;  
  unsigned int y = Factorial(x);
  cout << "Factorial(3) = " << y << "\n";
}
