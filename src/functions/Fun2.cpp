#include <iostream>

using namespace std;

void swap(int& num1, int& num2);

int main()
{
    int var1 = 10;
    int var2 = 20;
    swap(var1, var2);
    cout << "var1 = " << var1 << '\n';
    cout << "var2 = " << var2 << '\n';
    return 0;
}

void swap(int& num1, int& num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
