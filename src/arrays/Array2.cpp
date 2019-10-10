#include <iostream>

using namespace std;

int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    int *b;

    b = a;

    for (int i = 0; i < 5; i++) {
        // what happen if we access b, not a?
        cout << b[i] << "\n";
    }
    
    cout << "\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";    
}
