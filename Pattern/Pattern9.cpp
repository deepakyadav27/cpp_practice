#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value;
            value = value - 1;
            j++;
        }
        cout << endl;
        i++;
    }
}