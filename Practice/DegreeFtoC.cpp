#include <iostream>
using namespace std;
int main()
{
    float C, F;
    cout << "Enter the value of Degree Fahrenheight :\n";
    cin >> F;
    cout << "The value in Degree celcius is :\n";
    C = float(5) / float(9) * (F - 32);
    cout << C;
}