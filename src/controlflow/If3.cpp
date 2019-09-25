#include <iostream>

using namespace std;

int main()
{
  int x = 10;
  x++;
  if (x > 10)
    cout << "[Then] You do not have to use curly braces for a single statement.\n";
  else
    cout << "[Else] You do not have to use curly braces for a single statement.\n";
}
