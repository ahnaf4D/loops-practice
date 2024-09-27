#include <iostream>
#define endl "\n"
using namespace std;
typedef long long ll;
// series related program
int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int rows = 1; rows <= n; ++rows)
    {
        ll termsSum = 0;
        for (int cols = 1; cols <= rows; ++cols)
        {
            termsSum = termsSum * 10 + 9;
        }
        cout << termsSum << " ";
        sum += termsSum;
    }
    cout << endl;
    cout << "The sum of the above series is " << sum << endl;
}