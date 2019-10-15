#include <iostream>

using namespace std;

int* foo(int size);

int main()
{
    int size = 5;
    int *a = foo(size);

    for (int i = 0; i < size; i++) {
        cout << a[i] << "\n";
    }

    // Do not forget to free up the memory space you no longer use.
    // What if you forget to write the following line?
    delete [] a;

    size = 3;
    a = foo(size);
    cout << "\n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << "\n";
    }
    delete [] a;
}

int* foo(int size)
{
    int *a = new int[size];
    for (int i = 0; i < size; i++) {
        a[i] = i;
    }
    return a;
}
