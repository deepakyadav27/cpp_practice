#include <iostream>
using namespace std;
// Printing Triangle pattern
int main()
{
    int i = 1;
    int n;
    cout << "enter the value of n: \n";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    // code for inverted triangle
    cout << "The inverted triangle for the above triangle will look like this: \n";
    i = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= i)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
}

// code for inverted triangle pattern
