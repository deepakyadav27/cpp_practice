#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, count = 0;
    cout << "Enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            count = count + 1;
            cout << count;
            j++;
        }
        cout << endl;
        i++;
    }
}