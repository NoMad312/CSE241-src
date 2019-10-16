#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[4] = "AAA";
    char s2[4] = "AAA";

    if (s1 == s2) {
        cout << "s1 == s2\n";
    } else {
        cout << "s1 != s2\n";
    }

    cout << "strcmp(\"A\", \"B\") = " << strcmp("A", "B") << "\n";
    cout << "strcmp(\"B\", \"A\") = " << strcmp("B", "A") << "\n";
    cout << "strcmp(\"A\", \"A\") = " << strcmp("A", "A") << "\n";

    cout << "\n";
    cout << "strcmp(\"AA\", \"AB\") = " << strcmp("AA", "AB") << "\n";
    cout << "strcmp(\"AB\", \"AA\") = " << strcmp("AB", "AA") << "\n";
    cout << "strcmp(\"AA\", \"AA\") = " << strcmp("AA", "AA") << "\n";

    cout << "\n";
    cout << "strcmp(\"A\", \"AB\") = " << strcmp("A", "AB") << "\n";
    cout << "strcmp(\"AB\", \"A\") = " << strcmp("AB", "A") << "\n";

    cout << "\n";
    if (strcmp(s1, s2) == 0) {
        cout << "s1 equals s2\n";
    } else {
        cout << "s1 does not equal s2\n";
    }

    // You can also write as follows:
    cout << "\n";
    if (!strcmp(s1, s2)) { // any non-zero value is treated as true.
        cout << "s1 equals s2\n";
    } else { // 0 is treated as false.
        cout << "s1 does not equal s2\n";
    }
}
