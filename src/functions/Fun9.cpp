#include <iostream>

using namespace std;

struct Pair {
    int first;
    int second;
};

Pair& swap(Pair&);

int main()
{
    Pair p1 = {10, 20};
    cout << "address of p1: " << &p1 << '\n';

    swap(p1) = {30, 40};

    cout << "p1.first = " << p1.first <<  '\n';
    cout << "p1.second = " << p1.second << '\n';

    return 0;
}

Pair& swap(Pair& pair)
{
    int temp;

    temp = pair.first;
    pair.first = pair.second;
    pair.second = temp;

    cout << "address of pair: " << &pair << '\n';
    return pair;
}
