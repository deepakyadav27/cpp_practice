// Desired Pattern:
// A
// B C
// C D E
// D E F G

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        char value = 'A' + i;
        while (j <= i)
        {
            char new_value = value + j - 2;
            cout << new_value;
            j++;
        }
        cout << endl;
        i++;
    }
}