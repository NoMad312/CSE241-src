#include <iostream>
#include <limits>

using namespace std;

int main() {
  cout << "Minimum value for float: " << numeric_limits<float>::min() << '\n';
  cout << "Maxium value for float: " << numeric_limits<float>::max() << '\n';
  cout << '\n';

  cout << "Minimum value for double: " << numeric_limits<double>::min() << '\n';
  cout << "Maxium value for double: " << numeric_limits<double>::max() << '\n';
  cout << '\n';

  cout << "Minimum value for long double: " << numeric_limits<long double>::min() << '\n';
  cout << "Maxium value for long double: " << numeric_limits<long double>::max() << '\n';
  cout << '\n';

  return 0;
}
