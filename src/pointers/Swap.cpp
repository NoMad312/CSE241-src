#include <iostream>

using namespace std;

void swap1(int& num1, int& num2);
void swap2(int* num1, int* num2);

int main()
{
    int var1 = 10;
    int var2 = 20;

    cout << "Original: \n";
    cout << "var1 = " << var1 << '\n';
    cout << "var2 = " << var2 << '\n';

    swap1(var1, var2);
    cout << "After 1st swap: \n";
    cout << "var1 = " << var1 << '\n';
    cout << "var2 = " << var2 << '\n';

    // &: address-of operator (reference operator)
    swap2(&var1, &var2);
    cout << "After 2nd swap: \n";
    cout << "var1 = " << var1 << '\n';
    cout << "var2 = " << var2 << '\n';
    return 0;
}

void swap1(int& num1, int& num2)
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap2(int* num1, int* num2)
{
    int temp;

    // *: dereferencing operator
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
