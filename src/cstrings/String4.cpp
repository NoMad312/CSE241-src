#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[6] = "Hello";

    // A string is an array of characters!
    s1[0] = 'H';
    s1[1] = 'i';
    s1[2] = '\0';
    cout << "s1: " << s1 << '\n';

    // It is better to use a function.
    strcpy(s1, "Hi"); // Notice that we included <cstring> in this file.
    cout << s1 << "\n";

    /* strcpy is not a recommened function to use.
       The following shows the problem of strcpy. */
    char s2[3];
    strcpy(s2, "Hello, everyone");
    cout << "s2: " << s2 << "\n";
    cout << "s1: " << s1 << "\n";


    // Better alternative: strncpy
    char s3[] = "Hello, everyone";
    strncpy(s1, s3, 5); // why 5? why not 6?
    s1[5] = '\0';
    cout << "s1: " << s1 << "\n";

    // What if you want to copy only when you have enough space in the array?
    if (strlen(s3) < 6) {
        strncpy(s1, s3, 5);
    } else {
        cout << "The length of the source string is " << strlen(s3) << \
            ", which is larger than 5.\n";
    }
}
