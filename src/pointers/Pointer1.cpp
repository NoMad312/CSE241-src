#include <iostream>

using namespace std;

int main()
{
    int var = 10;
    int *p1 = &var;
    int* p2 = &var;
    int *p3 = p1;

    // int *p1 = &var, *p2 = &var, *p3 = p1;

    cout << "p1: " << p1 << '\n';
    cout << "p2: " << p2 << '\n';
    cout << "p3: " << p3 << '\n';
    cout << "&var: " << &var << "\n\n";

    cout << "*p1: " << *p1 << '\n';
    cout << "*p2: " << *p2 << '\n';
    cout << "*p3: " << *p3 << '\n';
    cout << "var: " << var << "\n\n";
    
    *p3 = 20;

    cout << "*p1: " << *p1 << '\n';
    cout << "*p2: " << *p2 << '\n';
    cout << "*p3: " << *p3 << '\n';
    cout << "var: " << var << '\n';    
}
