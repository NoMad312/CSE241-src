#include <iostream>

using namespace std;

int main()
{
    int (*a)[3] = new int[2][3];
    int x = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = x++;
        }
    }        

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    delete a;

    // For more information, read the following:
    // https://www.learncpp.com/cpp-tutorial/6-14-pointers-to-pointers/
}
