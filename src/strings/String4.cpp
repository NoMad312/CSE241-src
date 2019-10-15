#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[6];
    strcpy(s1, "Hello");
    cout << s1 << "\n";

    /* The following shows the problem of strcpy. */
    // strcpy(s1, "Hello, everyone");
    // cout << s1 << "\n";

    char s2[] = "Hello, everyone";
    strncpy(s1, s2, 5); // why 5? why not 6?
    s1[5] = '\0';
    cout << s1 << "\n";    
}
