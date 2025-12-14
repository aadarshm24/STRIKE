// Problem 4 : Calculator

#include <iostream>
using namespace std;

int main()
{
    int num2, num1;
    char choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Enter operation(+,-,/,*): \n";
    cin >> choice;

    if (choice == '+')
    {
        cout<<"The sum to two number "<<num1<<" & "<<num2<<" is "<<num1+num2<<endl;
    }
    
    else if (choice == '-')
    {
        cout << "The difference of two number " << num1 << " & " << num2 << " is " << num1 - num2 << endl;
    }

    else if (choice == '/')
    {
        cout << "The division of two number " << num1 << " & " << num2 << " is " << num1 / num2 << endl;
    }

    else if (choice == '/')
    {
        cout << "The multiplication of two number " << num1 << " & " << num2 << " is " << num1 * num2 << endl;
    }

    else
    {
        cout<<"invalid input";
    }

    return 0;
}
