#include <iostream>
#include <cmath>
#define endl "\n"
using namespace std;
bool isNotPrime(int n)
{
    if (n < 0)
    {
        return true;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if (isNotPrime(i) == false)
        {
            cout << i << " ";
        }
    }
    return 0;
}