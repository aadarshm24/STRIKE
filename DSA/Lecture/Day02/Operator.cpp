#include<iostream>
using namespace std;
int main()
{
    // Type conversion 
    int a1 ='a'+1;
    char a2 = 'a'+1;

    cout<<"int of 'a'+1 "<<a1<<endl;
    cout<<"char of 'a'+1 "<<a2<<endl;

    // opertor in c++

    // Arithmetic operator
    cout<<"Arithmetic operator"<<endl;
    int x=10, y=3;
    cout<<"x+y= "<<x+y<<endl;
    cout<<"x-y= "<<x-y<<endl;
    cout<<"x*y= "<<x*y<<endl;
    cout<<"x/y= "<<x/y<<endl;
    cout<<"x%y= "<<x%y<<endl;
    cout<<endl;
    
    //assignment operator
    cout<<"Assignment operator"<<endl;
    int m=5;
    cout<<"m=5: "<<m<<endl;
    m+=3;
    cout<<"m+=3: "<<m<<endl;
    m*=2;
    cout<<"m*=2: "<<m<<endl;
    m-=4;
    cout<<"m-=4: "<<m<<endl;
    m/=2;
    cout<<"m/=2: "<<m<<endl;
    m%=2;
    cout<<"m%=2: "<<m<<endl;
    cout<<endl;

    //camparison operator
    cout<<"Comparison operator"<<endl;
    int n=10;
    cout<<"n=10: "<<n<<endl;
    cout<<"n>5: "<<(n>5)<<endl;
    cout<<"n<5: "<<(n<5)<<endl;
    cout<<"n==10: "<<(n==10)<<endl;
    cout<<"n!=10: "<<(n!=10)<<endl;
    cout<<endl;
    
    //logical operator
    cout<<"Logical operator"<<endl;
    bool p=true, q=false;
    cout<<"p=true, q=false"<<endl;
    cout<<"p && q: "<<(p && q)<<endl;
    cout<<"p || q: "<<(p || q)<<endl;
    cout<<"!p: "<<(!p)<<endl;
    cout<<"!q: "<<(!q)<<endl;
    cout<<endl;

    // bitwise operator
    cout<<"Bitwise operator"<<endl;
    int r=5, s=3; // in binary: 5=0101, 3=0011
    cout<<"r=5, s=3"<<endl;
    cout<<"r & s: "<<(r & s)<<endl; // 0101 & 0011 = 0001 (and)
    cout<<"r | s: "<<(r | s)<<endl; // 0101 | 0011 = 0111 (or)
    cout<<"r ^ s: "<<(r ^ s)<<endl; // 0101 ^ 0011 = 0110 (xor)
    cout<<"~r: "<<(~r)<<endl;       // ~0101 = 1010 (in 32-bit representation (not)
    cout<<"r << 1: "<<(r << 1)<<endl; // 0101 << 1 = 1010 (right shift)
    cout<<"r >> 1: "<<(r >> 1)<<endl; // 0101 >> 1 = 0010 (left shift)
    cout<<endl;
    
    //increment and decrement operator
    cout<<"Increment and Decrement operator"<<endl;
    int t=5;
    cout<<"t=5"<<endl;
    cout<<"++t: "<<(++t)<<endl; // pre-increment
    cout<<"t++: "<<(t++)<<endl; // post-increment
    cout<<"--t: "<<(--t)<<endl; // pre-decrement
    cout<<"t--: "<<(t--)<<endl; // post-decrement
    cout<<endl;
    return 0;

    
}