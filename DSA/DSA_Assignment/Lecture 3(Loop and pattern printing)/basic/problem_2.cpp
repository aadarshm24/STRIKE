// Problem 2: Sum of First n Numbers

#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of first 10 number is: " << sum << endl;

    return 0;
}