#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Please select a number: \n";
    cin >> n;
    bool isPrime = true;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Non Prime";
    }
}