// sum and avarage

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << "Sum is " << sum << endl;

    float avg = 0;
    avg = sum / 5.0;
    cout << "Average is " << avg << endl;

    return 0;
}