#include <iostream>
#include <cmath>
#define endl "\n"
using namespace std;
int main()
{
    int terms;
    double sum_of_series = 0;
    cin >> terms;
    for (int i = 1; i <= terms; ++i)
    {
        double powerOf = 1 / pow(i, i);
        sum_of_series += powerOf;
        cout << 1 << " / " << i << " ^ " << i << " = " << powerOf << endl;
    }
    cout << sum_of_series << endl;
    return 0;
}