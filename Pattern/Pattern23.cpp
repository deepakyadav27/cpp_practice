// Desired Pattern
//       1
//     2 3
//   4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "enter the value of n: \n";
    cin >> n;
    int sum = 1;
    while (i <= n)
    {
        int spaces = n - i;
        while (spaces)
        {
            cout << " ";
            spaces = spaces - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << sum;
            sum = sum + 1;
            j++;
        }
        i++;
        cout << endl;
    }
}