// sum of the function to take input from the user
#include <iostream>
using namespace std;
int main()
{
   int number;
   cout << "Enter an integer: ";
   cin >> number;
   int sum = 0;
    for(int i = 1; i <= number; ++i)
    {
         sum += i;
    }
    cout << "Sum of first " << number << " integers is " << sum << endl;
    return 0;
}