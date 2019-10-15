#include <iostream>

using namespace std;

int main()
{
    int a[5] = {0, 1, 2, 3, 4};

    // Can we access a[5]?
    // Which value does it have?
    for (int i = 0; i <= 5; i++) {
        cout << a[i] << "\n";
    }

    // You can access the out-of-bounds memroy region, but
    // this will make your program unreliable.
    cout << "\n";
    cout << a[100] << "\n";

    cout << "\n";
    cout << a[-100] << "\n";
    cout << *(a - 100) << "\n";

    cout << "\n";
    int *b = new int[5];
    for (int i = 0; i < 10; i++) {
        b[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        cout << b[i] << "\n";
    }

    delete [] b;

    // Even after deleting the array of b, they may still be accessible.
    // However, accessing deleted memory region is a bad idea because
    // there there is no guarantee that the values in deleted memory region
    // is going to be preserved.
    cout << "\n";
    for (int i = 0; i < 10; i++) {
        cout << b[i] << "\n";
    }
}
