// maximum number in array

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {0, 4, 7, 9, 1};
    cout << "Array element: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "maximum number is: " << max << endl;
}