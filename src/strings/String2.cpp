#include <iostream>

using namespace std;

int main()
{
    char s[5];
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            s[i] = '\0';
        } else {
            s[i] = 'A';
        }
    }

    // What will be printed out?
    cout << s << "\n";

    for (int i = 0; i < 5; i++) {    
        cout << s[i];
    }
    cout << "\n";

    cout << "AAA\0A";
    cout << "\n";

    char s2[5] = {'A', 'A', 'A', '\0', 'A'};
    cout << s2 << "\n";
}
