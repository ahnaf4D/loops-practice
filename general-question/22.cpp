#include <iostream>
#include <iomanip>
#define endl "\n"
using namespace std;
// harmonic sequence
int main()
{
    int n;
    cin >> n;
    float sum = 0.0;
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << "1 / " << i;
        }
        else
        {
            cout << " + 1 / " << i;
        }
        sum += 1.0 / i;
    }
    cout << endl;
    cout << "The sum of the series up to " << n << " terms : " << sum;
    return 0;
}