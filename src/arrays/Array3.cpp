#include <iostream>

using namespace std;

int main()
{
    // array initialization
    int a[5] = {0, 1, 2, 3, 4};
    int *b;

    b = a;

    cout << "access through b+i\n";
    for (int i = 0; i < 5; i++) {
        // what happen if we b + i instead of b[i]?
        cout << *(b + i) << "\n";
    }

    cout << "\n";
    cout << "access through a+i\n";
    for (int i = 0; i < 5; i++) {
        // what happen if we a + i instead of a[i]?
        cout << *(a + i) << "\n";
    }

    cout << "\n";
    cout << "access through b++\n";
    for (int i = 0; i < 5; i++) {
        // Q1: what whould be printed out?
        // Q2: what if we change "b++" to "a++"?
        cout << *(b++) << "\n";
    }


    /* Try to compile the source code after uncommenting the following region. */
    // int * const c = a; // const pointer to int
    // cout << "\n";
    // cout << "access through c++\n";
    // for (int i = 0; i < 5; i++) {
    //     cout << *(c++) << "\n";
    // }
}
