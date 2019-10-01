#include <iostream>

using namespace std;

struct Pair {
    int first;
    int second;
};

Pair* swap(Pair&);

int main()
{
    Pair p1 = {10, 20};
    cout << "address of p1: " << &p1 << '\n';

    Pair* p2 = swap(p1);

    cout << "p1.first = " << p1.first <<  '\n';
    cout << "p1.second = " << p1.second << '\n';

    cout << "p2.first = " << p2->first <<  '\n';
    cout << "p2.second = " << p2->second << '\n';

    cout << "value of p2: " << p2 << '\n';

    return 0;
}

Pair* swap(Pair& pair)
{
    int temp;

    temp = pair.first;
    pair.first = pair.second;
    pair.second = temp;

    cout << "address of pair: " << &pair << '\n';
    return &pair;
}
