#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter the value of n: \n";
    cin >> n;
    char value = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << value;
            value = value + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}