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
    Pair *pair = Foo(v1, v2); // A
    cout << "At main: \n";    
    cout << ToString(pair) << "\n\n";

    // IMPORTANT: Once you finish to use the memory space, you should free it up.
    delete pair;

    pair = Foo(30, 40);
    cout << "At main: \n";    
    cout << ToString(pair) << "\n";
}

Pair* Foo(int x, int y)
{
    // allocate the memory space for p in the heap, instead of in the stack.
    Pair *p = new Pair;
    *p = {x , y};
    cout << "At Foo: \n";
    cout << ToString(p) << "\n";
    return p;
}

string ToString(Pair* pair)
{
    return "{" + to_string(pair->first) + ", " + to_string(pair->second) + "}";
}
