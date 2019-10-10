#include <iostream>

using namespace std;

/*
 * This is an example about pointer arithemtic
 */
int main()
{
    int a[5];

    for (int i = 0; i < 5; i++) {
        a[i] = i;
    }

    // pointer arithemtic for +
    for (int i = 0; i < 5; i++) {
        cout << a + i << "\n";
    }

    // pointer arithemtic for -
    int *c = a;
    for (int i = 1; i < 5; i++) {
        cout << a + i - c << "\n";
    }

    /* Try to compile the folloing region */
    // cout << a * 2 << "\n";
    // cout << a / 2 << "\n";

    // int *b = a;
    // cout << b * 2 << "\n";
    // cout << b / 2 << "\n";
}
