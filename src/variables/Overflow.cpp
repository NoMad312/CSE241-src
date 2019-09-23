#include <iostream>
#include <limits>

using namespace std;

int main() {
  cout << "Minimum value for int: " << numeric_limits<int>::min() << '\n';
  cout << "Maxium value for int: " << numeric_limits<int>::max() << '\n';
  cout << "Maxium value for int + 1 = " << numeric_limits<int>::max() + 1 << '\n';
  cout << "Minimum value for int - 1 = " << numeric_limits<int>::min() - 1 << '\n';
  cout << '\n';

  cout << "Minimum value for unsigned int: " << numeric_limits<unsigned int>::min() << '\n';
  cout << "Maxium value for unsigned int: " << numeric_limits<unsigned int>::max() << '\n';
  cout << "Maxium value for unsigned int + 1 = " << numeric_limits<unsigned int>::max() + 1 << '\n';
  cout << "Minimum value for unsigned int - 1 = " << numeric_limits<unsigned int>::min() - 1 << '\n';  
  cout << '\n';

  return 0;
}
