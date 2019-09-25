#include <iostream>

using namespace std;


void foo(int);

int main()
{
  int i = 0;
  while (i < 3)
  {
      cout << i;
      i++;
  }
  cout << '\n';

  i = 0;
  do
  {
      cout << i;
      i++;      
  } while (i < 3);
  cout << '\n';
  
  foo(0);
}

void foo(int i) {
  while (i < 0)
  {
      cout << i;
      i++;
  }
  cout << '\n';

  i = 0;
  do
  {
      cout << i;
      i++;      
  } while (i < 0);
  cout << '\n';      
}
