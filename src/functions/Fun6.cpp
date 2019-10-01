#include <iostream>

using namespace std;

struct Pair {
    int first;
    int second;
};

Pair& swap(int num1, int num2);

int main()
{
    Pair p = swap(10, 20);
    cout << "p.first = " << p.first <<  '\n';
    cout << "p.second = " << p.second << '\n';

    cout << "address of p: " << &p << '\n';

    return 0;
}

/*
 * To avoid copying the contents of variable pair, 
 * we return a value by reference. However, the following
 * code is problematic. Why?
 */
Pair& swap(int num1, int num2)
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    Pair pair = {num1, num2};
    cout << "address of pair: " << &pair << '\n';
    return pair;
}
