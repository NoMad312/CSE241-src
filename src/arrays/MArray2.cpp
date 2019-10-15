#include <iostream>

using namespace std;

int main()
{
    int a[2][2][2];
    int x = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                a[i][j][k] = x++;
            }
        }
    }

    cout << "a = " << a << "\n";
    cout << "a + 1 = " << a + 1 << "\n\n";

    cout << "a[0] = " << a[0] << "\n";
    cout << "a[0] + 1 = " << a[0] + 1 << "\n\n";

    cout << "a[0][0] = " << a[0][0] << "\n";
    cout << "a[0][0] + 1 = " << a[0][0] + 1 << "\n";    

    // Draw how a[2][3][4] is allocated in the memory.
}
