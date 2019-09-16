#include <iostream>
using namespace std;

int change(int x);

int main( )
{
  int x;
  cout << "Enter an integer: ";
  cin >> x;  
  x = change(x);
  cout << "x = " << x << "\n";
  return 0;
}
