#include <iostream>

using namespace std;

int x = 10;

int main()
{
  int x = 2;

  cout << "x = " << x << '\n';

  {
    int x = 3;
    int y = x;
    cout << "y = " << y << '\n';
  }

  {
    int z = x;
    cout << "z = " << z << '\n';
  }

  for (int x = 0; x < 3; x++)
  {
    cout << "x = " << x << '\n';
  }
  cout << '\n';

  while (x < 4) {
    cout << "x = " << x << '\n';
    x++;
  }

  cout << "::x = " << ::x << '\n';
}
