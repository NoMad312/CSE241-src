#include <iostream>

using namespace std;

void foo1(int*);
void foo2(int c[5]);
void foo3(int c[]);

int main()
{
    int a[5] = {0, 1, 2, 3, 4};

    foo1(a);
    foo2(a);
    foo3(a);
}

void foo1(int *c)
{
    cout << "At foo1:\n";
    for (int i = 0; i < 5; i++) {
        cout << c[i] << "\n";
    }
}

void foo2(int c[5])
{
    cout << "At foo2:\n";
    for (int i = 0; i < 5; i++) {
        cout << c[i] << "\n";
    }
}

void foo3(int c[])
{
    cout << "At foo3:\n";
    for (int i = 0; i < 5; i++) {
        cout << c[i] << "\n";
    }
}
