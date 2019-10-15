#include <iostream>

using namespace std;

int main()
{
    char s1[6];
    // The following is not compiled.
    s1 = "Hello";

    /* The following explains what happens in the above */
    char s2[6] = "Hello";
    // The following is not compiled.
    // It does not copy the contents of the array s2.
    // Assignment is performed over a pointer value (i.e., an address).
    s1 = s2;

    /* similar situations */
    char *s3;
    char * const s4;

    s3 = s2;
    s4 = s2; // this is not compiled.
}
