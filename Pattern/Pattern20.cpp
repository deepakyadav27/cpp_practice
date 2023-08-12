// Desired Pattern:
// 1111
//  222
//   33
//    4
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }
}