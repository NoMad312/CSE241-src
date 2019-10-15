#include <iostream>

using namespace std;

int* foo();

int main()
{
    int *a = foo();

    for (int i = 0; i < 5; i++) {
        cout << a[i] << "\n";
    }    
}

int* foo()
{
    int a[5] = {0, 1, 2, 3, 4};   
    return a;
}
