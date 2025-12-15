// Problem 2: Maximum of Two Numbers

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;

    // logic

    if (a > b)
    {
        cout << "Number 1 " << a << " is greater than Number 2 " << b << " ." << endl;
    }

    else if (b > a)
    {
        cout << "Number 2 " << b << " is greater than Number 1 " << a << " ." << endl;
    }
    else if (b == a)
    {
        cout << "Number 1 " << a << " and Number 2 " << b << " are equal." << endl;
    }

    else
    {
        cout << "Enter valid number:";
    }
    return 0;
}