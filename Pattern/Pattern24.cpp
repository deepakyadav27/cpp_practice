// Desired Pattern:
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        int space_f = n - i;
        while (space_f)
        {
            cout << " ";
            space_f = space_f - 1;
        }
        int j = 1;
        int value = 1;
        while (j <= i)
        {
            cout << value;
            value = value + 1;
            j++;
        }
        int num = i - 1;
        while (num)
        {
            cout << num;
            num = num - 1;
        }
        int blank = n - i;
        while (blank)
        {
            cout << " ";
            blank = blank - 1;
        }
        cout << endl;
        i++;
    }
}