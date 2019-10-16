#include <iostream>
#include "Sort3.hpp"

using namespace std;

void Swap(int& variable1, int& variable2)
{
    int temp;
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void Sort3(int& i, int& j, int& k)
{   if i > j & i > k:
        if k > j: Swap(k,j);
    if j > i & j > k:Swap(i,j)
        if k > j: Swap(k,j);
    if k > j & k > i:Swap(k,i)
        if k > j: Swap(k,j);
    
    // TODO: fill in the body.
    // You MUST use the Swap function located in Sort3.hpp.
}
