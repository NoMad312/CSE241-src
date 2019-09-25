#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while (i < 5)
    {
      cout << i++;
    }
    cout << '\n';

    i = 0;
    while (i < 5)
    {
      cout << i++;
      if (i > 3) break;
    }
    cout << '\n';

    for (i = 0; i < 5; i++)
    {
      if (i == 3) continue;        
      cout << i;
    }
    cout << '\n';    
}
