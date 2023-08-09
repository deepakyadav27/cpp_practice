#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        char output = 'A' + i - 1;
        while (j <= i)
        {
            cout << output;
            j++;
        }
        cout << endl;
        i++;
    }
}