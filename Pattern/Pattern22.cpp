// Desired Pattern
// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        int spaces = i - 1;
        while (spaces)
        {
            cout << " ";
            spaces = spaces - 1;
        }
        int sum = i;
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << sum;
            sum = sum + 1;
            j++;
        }
        i++;
        cout << endl;
    }
}