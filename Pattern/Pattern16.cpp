#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "enter the value of n: \n";
    cin >> n;
    char ch = 'D';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch1 = ch - i + j;
            cout << ch1;
            j++;
        }
        cout << endl;
        i++;
    }
}