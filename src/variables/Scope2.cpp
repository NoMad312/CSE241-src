#include <iostream>

using namespace std;

namespace nameA
{
  int x = 20;
  int y = 200;
}

namespace nameB
{
  int x = 30;
  int y = 300;

  namespace nameC
  {
    int x = 40;
    int y = 400;
  }
}

int x = 10;

int main()
{
  cout << "x = " << x << '\n';
  cout << "::x = " << ::x << '\n';
  cout << "nameA::x = " << nameA::x << '\n';
  cout << "nameB::x = " << nameB::x << '\n';
  cout << "nameB::nameC::x = " << nameB::nameC::x << '\n';

  cout << "::nameA::x = " << ::nameA::x << '\n';
  cout << "::nameB::x = " << ::nameB::x << '\n';

  {
    using namespace nameA;
    cout << "y = " << y << '\n';
  }

  {
    using namespace nameB;
    cout << "y = " << y << '\n';
  }

  {
    using namespace nameB::nameC;
    cout << "y = " << y << '\n';
  }
}
