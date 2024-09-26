#include <iostream>
#define endl "\n"
using namespace std;
// implement two loops in these code by ahnaf
int main()
{
    int n;
    cin >> n;
    int series_sum = 0;
    for (int row = 1; row <= n; ++row)
    {
        int rows_sum = 0;
        for (int cols = 1; cols <= row; ++cols)
        {
            rows_sum += cols;
        }
        for (int i = 1; i <= row; ++i)
        {
            cout << i;
            if (i < row)
            {
                cout << " + ";
            }
        }
        cout << " = " << rows_sum << endl;
        series_sum += rows_sum;
    }
    cout << series_sum << endl;
    return 0;
}