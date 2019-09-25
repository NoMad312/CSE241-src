#include <iostream>

using namespace std;

int main()
{
  int i = 0;
  while (++i < 3)
  {
      cout << i;
  }
  cout << '\n';

  i = 0;
  while (i++ < 3)
  {
      cout << i;
  }
  cout << '\n';  

  for (int i = 0; i < 3; i++) {
      cout << i;
  }

  cout << '\n';
}
