// Reverse_array

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"Array element is: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    cout << "Reversed array element is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}