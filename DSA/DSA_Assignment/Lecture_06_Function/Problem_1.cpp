// swap function 

#include<iostream>
using namespace std;

void swap(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main()
{int a=4,b=7;
    cout<<a<<"  "<<b<<endl;
    swap(a,b);
    cout<<b<<"  "<<a<<endl;
    
}