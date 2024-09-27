#include <iostream>
#include <cmath>
#define endl "\n"
using namespace std;
typedef long long ll;
// series related program - 2
int getFactorial(int n)
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
    int x;
    cin >> x;
    int n;
    cin >> n;

    float total_term_sum = 1.0;
    for (int i = 1; i < n; ++i)
    {
        float term_sum = pow(x, i) / getFactorial(i);
        total_term_sum += term_sum;
    }
    cout << "The sum is : " << total_term_sum << endl;
    return 0;
}