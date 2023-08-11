// Desired Pattern:
//     *
//    **
//   ***
//  ****

// Approach 1
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
        while (j <= n)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}
