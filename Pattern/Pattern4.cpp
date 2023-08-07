#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, sum = 0;
    cout << "enter the value of n:\n";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            sum = sum + 1;
            cout << sum;
            j++;
        }
        cout << endl;
        i++;
    }
}