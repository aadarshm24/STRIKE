// min of the array

#include<iostream>
using namespace std;
int main()
{
    int arr[9]={1,2,3,5,23,1,5,2,7};
    cout<<"Array elements are: ";
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // minimum in array logic

    int min = arr[0];
    for (int i = 0; i < 9; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    cout << "minmum number is: " << min << endl;
}