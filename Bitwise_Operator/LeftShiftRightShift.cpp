// use of left and right shift operators.
// for positive numbers padding will always be by zeros but we can't say in case of negative numbers.
#include <iostream>
using namespace std;
int main()
{
    cout << (17 >> 1) << endl; // right shift operator, right shift for a positive number means division by 2
    cout << (17 >> 2) << endl; // this means right shift 17 by 2. this means 17 will be divided by 2 and the resultant will again be divided by 2
    cout << (19 << 1) << endl; // left shift 19 by 1, means multiply 19 by 2
    cout << (19 << 2) << endl; // left shift 19 by 2, means multiply 19 by 2 and again multiply the resultant by 2
}