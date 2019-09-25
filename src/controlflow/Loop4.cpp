#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << i << ',' << j << '\n';
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2) break;
            cout << i << ',' << j << '\n';
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 1) continue;
            cout << i << ',' << j << '\n';
        }
    }
}
