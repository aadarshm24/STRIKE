// Linear search

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 5, 8, 10};
    cout << "Array element is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int key;
    cout << "Enter which element you want to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element is found at index " << i;
        }
    }

    return 0;
}