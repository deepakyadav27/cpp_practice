#include <iostream>
using namespace std;
// int main()
// {
//     int n, i = 1;
//     cout << "Enter the value of n: \n";
//     cin >> n;
//     while (i <= n)
//     {
//         int j = 1;
//         int value = i;
//         while (j <= i)
//         {
//             cout << value;
//             value = value - 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// another approach without using the extra variable i.e value in this case
int main()
{
    int n, i = 1;
    cout << "Enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}