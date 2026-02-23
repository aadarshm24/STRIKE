// Print array using another function 

#include<iostream>
#include<vector>

using namespace std;

void printarr(int a[],int m)
{
    for (int i = 0; i <= m; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl; 
}
int main()
{
    int arr[5]={1,2,4,3,2};
    int n=6;
    cout<<"Calling fucntion"<<endl;
    printarr(arr,n);

    vector<int>arr2;
    arr2.push_back(3);
    arr2.push_back(2);
    arr2.push_back(6);
    int size=arr2.size();
    cout<<size<<"Size of the array"<<endl;
    cout<<endl<<"size of array 2 is :"<<arr2.size();
}