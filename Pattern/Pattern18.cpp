// Desired Pattern:
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "enter the value of n:\n";
    cin >> n;

    while (i <= n)
    {
        int star = n - i + 1;
        while (star)
        {
            cout << "*";
            star = star - 1;
        }
        int j = 1;
        while (j < i)
        {
            cout << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}