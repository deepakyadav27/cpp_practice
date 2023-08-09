// Program to Print the pattern :
//      A B C
//      B C D
//      C D E

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
        char value = 'A' + i - 1;
        while (j <= n)
        {
            char final_value = value + j - 1;
            cout << final_value;
            j++;
        }
        cout << endl;
        i++;
    }
}