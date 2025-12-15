// Problem 3 : Positive, Negative, or Zero

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: \n";
    cin >> num;

    if (num > 0)
    {
        cout << "Num " << num << " is positive";
    }
    else if (num < 0)
    {
        cout << "Num " << num << " is negative";
    }
    else
    {
        cout << "Num " << num << " is zero";
    }
    return 0;
}