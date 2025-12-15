// prime number
#include <iostream>
using namespace std;
bool is_prime(int num)
{
    if (num <= 1)
        return false;

    if (num == 2)
        return true;

    if (num % 2 == 0)
        return false;

    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (is_prime(num))
    {
        cout << num << " Is prime" << endl;
    }
    else
    {
        cout << num << " Is not prime" << endl;
    }
}