#include <iostream>
#define endl "\n"
using namespace std;
int getFactorial(int n)
{
    int mult = 1;
    for (int i = 2; i <= n; ++i)
    {
        mult *= i;
    }
    return mult;
}
int main()
{
    int N;
    cin >> N;
    if (N == 0 || N == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        int fact = getFactorial(N);
        cout << fact << endl;
    }
    return 0;
}