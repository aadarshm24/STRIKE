// Problem 5: Grade Calculator

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter your makrs (0-100): ";
    cin>>num;

    if (num > 100 || num < 0)
    {
        cout << "Invalid marks!";
    }
    else if (num >= 90)
    {
        cout << "Grade: A (Excellent)";
    }
    else if (num >= 80)
    {
        cout << "Grade: B (Very Good)";
    }
    else if (num >= 70)
    {
        cout << "Grade: C (Good)";
    }
    else if (num >= 60)
    {
        cout << "Grade: D (Satisfactory)";
    }
    else
    {
        cout << "Grade: F (Fail)";
    }

    return 0;
}
