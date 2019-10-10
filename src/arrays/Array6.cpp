#include <iostream>

using namespace std;

void foo1(int*);

int main()
{
    int a[5] = {0, 1, 2, 3, 4};

    foo1(a);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << "\n";
    }    
}

void foo1(int *c)
{
    for (int i = 0; i < 5; i++) {
        c[i]++;
    }
}
