// Desired Pattern:
//    1
//   22
//  333
// 4444
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        // to print the spaces
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // to print the stars
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }
}