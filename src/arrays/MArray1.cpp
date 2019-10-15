#include <iostream>

using namespace std;

int main()
{
    int a[2][3] = {{0,1,2}, {3,4,5}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "a = " << a << "\n";
    cout << "a + 1 = " << a + 1 << "\n";
    cout << "a[1] = " << a[1] << "\n\n";

    cout << "a[0] = " << a[0] << "\n";
    cout << "a[0] + 1 = " << a[0] + 1 << "\n";

    // Draw how a[2][3] is allocated in the memory.
}
