#include <iostream>
#include <cmath>
#define endl "\n"
using namespace std;
int factorialOf(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    double x, sum = 0.0, terms = 0;
    int nth;
    cin >> x;
    cin >> nth;
    for (int i = 1; i <= nth; ++i)
    {
        int expo = 2 * (i - 1);
        terms = pow(x, expo) / factorialOf(expo);
        if (i % 2 == 0)
        {
            terms = -terms; // negative making technique
        }
        sum += terms;
        cout << "term " << i << " value is :  " << terms << endl;
    }
    cout << "total sum is " << sum << endl;
    return 0;
}