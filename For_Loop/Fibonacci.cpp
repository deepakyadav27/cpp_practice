#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n:\n";
    cin >> n;
    int a = 0; // first number
    int b = 1; // second number
    cout << a << " " << b << " ";
    int next_num;
    for (int i = 1; i <= n - 2; i++)
    {
        next_num = a + b;
        cout << next_num << " ";
        a = b;
        b = next_num;
    }
}