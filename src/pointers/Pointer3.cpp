#include <iostream>
#include <string>

using namespace std;

struct Pair {
    int first;
    int second;
};

Pair* Foo(int, int);
string ToString(Pair*);

int main()
{
    int v1 = 10;
    int v2 = 20;
    Pair *pair = Foo(v1, v2);
    cout << "At main: \n";    
    cout << ToString(pair) << "\n";
}

Pair* Foo(int x, int y)
{
    Pair p = {x,y};
    cout << "At Foo: \n";
    cout << ToString(&p) << "\n";
    return &p;
}

string ToString(Pair* pair)
{
    return "{" + to_string(pair->first) + ", " + to_string(pair->second) + "}";
}
