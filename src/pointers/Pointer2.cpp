#include <iostream>

using namespace std;

int main()
{
    int v1 = 0xFFFFFFFF;
    short v2 = 0;

    int *p1 = &v1;
    short* p2 = &v2;

    // sizeof(<type>): returns the size of the given type in bytes
    cout << "sizeof(v1) =  " << sizeof(v1) << '\n';
    cout << "sizeof(v2) =  " << sizeof(v2) << '\n';

    cout << "sizeof(p1) =  " << sizeof(p1) << '\n';
    cout << "sizeof(p2) =  " << sizeof(p2) << "\n\n";

    cout << "*p1 = " << hex << *p1 << "\n";
    cout << "*p2 = " << hex << *p2 << "\n\n";

    p2 = (short*) p1;
    cout << "p1 and p2 point to the same address\n";     
    cout << "*p1 = " << hex << *p1 << "\n";
    cout << "*p2 = " << hex << *p2 << "\n";    
}
