#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    int sum = 0;
    int n;
    cout << "Enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            i = i + 1;
        }

        else
        {
            i++;
        }
    }
    cout << sum;
}