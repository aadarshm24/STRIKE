/*

Binary Triangle:-

1
01
101
0101
10101

*/

#include <iostream>
using namespace std;

int main()
{
    bool a = true;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << int(a);
            a = !a;
        }
        cout << endl;
    }

    return 0;
}