#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    cout << "please enter the value of n \n:";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "not prime";
            i = n + 2;
        }
        else
        {
            i++;
        }
    }
    if (i == n)
    {
        cout << "it is a prime number";
    }
}