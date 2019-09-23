#include <iostream>
#include <limits>

using namespace std;

int main() {
  cout << "Minimum value for int: " << numeric_limits<int>::min() << '\n';
  cout << "Maxium value for int: " << numeric_limits<int>::max() << '\n';
  cout << "Non-sign bits in int: " << numeric_limits<int>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for unsigned int: " << numeric_limits<unsigned int>::min() << '\n';
  cout << "Maxium value for unsigned int: " << numeric_limits<unsigned int>::max() << '\n';
  cout << "Non-sign bits in unsigned int: " << numeric_limits<unsigned int>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for short int: " << numeric_limits<short int>::min() << '\n';
  cout << "Maxium value for short int: " << numeric_limits<short int>::max() << '\n';
  cout << "Non-sign bits in short int: " << numeric_limits<short int>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for unsigned short int: " << numeric_limits<unsigned short int>::min() << '\n';
  cout << "Maxium value for unsigned short int: " << numeric_limits<unsigned short int>::max() << '\n';
  cout << "Non-sign bits in unsigned short int: " << numeric_limits<unsigned short int>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for long: " << numeric_limits<long>::min() << '\n';
  cout << "Maxium value for long: " << numeric_limits<long>::max() << '\n';
  cout << "Non-sign bits in long: " << numeric_limits<long>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for unsinged long: " << numeric_limits<unsigned long>::min() << '\n';
  cout << "Maxium value for unsigned long: " << numeric_limits<unsigned long>::max() << '\n';
  cout << "Non-sign bits in unsigned long: " << numeric_limits<unsigned long>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for int16_t: " << numeric_limits<int16_t>::min() << '\n';
  cout << "Maxium value for int16_t: " << numeric_limits<int16_t>::max() << '\n';
  cout << "Non-sign bits in int16_t: " << numeric_limits<int16_t>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for uint16_t: " << numeric_limits<uint16_t>::min() << '\n';
  cout << "Maxium value for uint16_t: " << numeric_limits<uint16_t>::max() << '\n';
  cout << "Non-sign bits in uint16_t: " << numeric_limits<uint16_t>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for int32_t: " << numeric_limits<int32_t>::min() << '\n';
  cout << "Maxium value for int32_t: " << numeric_limits<int32_t>::max() << '\n';
  cout << "Non-sign bits in int32_t: " << numeric_limits<int32_t>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for uint32_t: " << numeric_limits<uint32_t>::min() << '\n';
  cout << "Maxium value for uint32_t: " << numeric_limits<uint32_t>::max() << '\n';
  cout << "Non-sign bits in uint32_t: " << numeric_limits<uint32_t>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for int64_t: " << numeric_limits<int64_t>::min() << '\n';
  cout << "Maxium value for int64_t: " << numeric_limits<int64_t>::max() << '\n';
  cout << "Non-sign bits in int64_t: " << numeric_limits<int64_t>::digits << '\n';
  cout << '\n';

  cout << "Minimum value for uint64_t: " << numeric_limits<uint64_t>::min() << '\n';
  cout << "Maxium value for uint64_t: " << numeric_limits<uint64_t>::max() << '\n';
  cout << "Non-sign bits in uint64_t: " << numeric_limits<uint64_t>::digits << '\n';
  cout << '\n';

  return 0;
}
