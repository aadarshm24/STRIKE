// maximum element in array

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 6, 3, 7, 23, 64, 74, 12, 54, 67};
    // traversal
    cout << endl<< "Array elements are: ";
    
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Finding maximum array
    int max = 0;
    arr[0] = max;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Max element in array is: " << max << endl
         << endl;

    return 0;
}