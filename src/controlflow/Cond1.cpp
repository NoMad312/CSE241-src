#include <iostream>

using namespace std;

bool foo(int);

int main()
{
    if (foo(0) && foo(10)) {
        cout << "A\n";
    } else {
        cout << "B\n";        
    }

    if (foo(20) || foo(0)) {
        cout << "C\n";
    } else {
        cout << "D\n";        
    }    
}

bool foo(int i)
{
    cout << i << '\n';
    if (i > 10) {
        return true;
    } else {
        return false;
    }
}
