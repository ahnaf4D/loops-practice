#include <iostream>
#define endl "\n"
using namespace std;
//  Euclid's Algorithm for GCD
int GCD(int a, int b)
{
    while (a % b != 0)
    {
        int quotient = a / b;
        int reminder = a % b;
        a = b;
        b = reminder;
    }
    return b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
    {
        cout << a << endl;
    }
    else if (a == 0)
    {
        cout << b << endl;
    }
    else if (a > b)
    {
        int gcdVal = GCD(a, b);
        cout << gcdVal << endl;
    }
    else
    {
        int gcdVal = GCD(b, a);
        cout << gcdVal << endl;
    }
    return 0;
}