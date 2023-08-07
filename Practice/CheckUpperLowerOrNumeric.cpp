#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the value\n";
    // cin >> ch;
    ch = 'a';
    cout << int(ch) << endl;

    if (ch > 64 && ch < 91)
    {
        cout << "Uppercase";
    }
    if (ch > 97 && ch < 123)
    {
        cout << "lowercase";
    }
    if (ch > 47 && ch < 58)
    {
        cout << "numeric";
    }
}