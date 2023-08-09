// Desired Pattern :
// A B C D
// E F G H
// I J K L
// M N O P
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter the value of n: \n";
    cin >> n;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch;
            // the below line of code declares the variable ch again and its scope is limited to only the while loop so the expected output is not same as the actual output
            // char ch = ch + 1;
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}