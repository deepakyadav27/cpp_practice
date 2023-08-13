#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "enter the number of rows:\n";
    cin >> n;
    while (i <= n)
    {
        int values = n - i + 1;
        int start = 1;
        while (values)
        {
            cout << start;
            start = start + 1;
            values = values - 1;
        }
        int j = 1;
        while (j <= 2 * (i - 1))
        {
            cout << "*";
            j++;
        }
        int start_2 = n - i + 1;
        int num = n - i + 1;
        int k = 1;
        while (k <= num)
        {
            cout << start_2;
            start_2 = start_2 - 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}