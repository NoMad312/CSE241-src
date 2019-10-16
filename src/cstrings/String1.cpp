#include <iostream>

using namespace std;

int main()
{
    // a string is a sequence of characters.
    char s[4] = "abc"; // why not giving 3 as the size of the array?
    cout << "s: " << s << "\n";

    // How is it possible to print "abc" in the above?
    // If you do not feel that this is strange, consider the following two facts.

    // fact1
    int a[4] = {1, 2, 3, 4};
    cout << "a: " << a << "\n";

    // fact2
    for (int i = 0; i < 10; i++) {
        cout << s[i] << ' ';
    }
    cout << '\n';

    // we mark the end of a string with `\0`.
    cout << "\\0: " << '\0';
    cout << '\n';

    // what if you want to print the address?
    cout << '\n';
    cout << (void*) s << "\n"; // Treat 's' as a void* variable.   
    cout << (void*) &s[0] << "\n"; // This also works.
    cout << (void*) &s[1] << "\n";

    // Now, can you see why we used s[4], s[3] earlier? 
}
