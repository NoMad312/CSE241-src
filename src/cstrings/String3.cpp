#include <iostream>

using namespace std;

int main()
{
    char s1[6] = "Hello";
    s1 = "Hi"; // This is not allowed.

    /* The following explains what happens in the above */
    char s2[3] = "Hi";
    // The following is not compiled.
    // It does not copy the contents of the array s2.
    // Assignment is performed over a pointer value (i.e., an address).
    // Recall that you cannot change the starting address of an array, once it is initialized.
    s1 = s2;

    /* similar situations */
    char *s3;
    char * const s4 = "Hello";

    s3 = s2; // this is possible.
    s4 = s2; // this is not allowed.

    // Then, how can we assign a string to a variable?
}
