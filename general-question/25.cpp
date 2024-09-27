#include <iostream>
#include <cmath>
using namespace std;
// (i / 2 ) % 2 == 1  ------> check for negative position in a loop
// (i / 2 ) % 2 == 0  ------> check for positive position in a loop
int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;
    int total_sum_num = 0;
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        int term = pow(x, i);
        if ((i / 2) % 2 == 1)
        {
            term = -term; // make term negative
        }
        cout << term << endl;
        total_sum_num += term;
    }
    cout << "The sum upto the " << n << " terms is : " << total_sum_num << endl;
    return 0;
}