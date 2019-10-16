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
    cout << "s: " << s << "\n";

    // s contains "AAA\0A".
    cout << "AAA\0A";
    cout << "\n";

    // The following is another way to initialize s.
    // Note that a string is an array of characters.
    char s2[5] = {'A', 'A', 'A', '\0', 'A'};
    cout << "s2: " << s2 << "\n";
}
