#include <iostream>
using namespace std;
#define endl "\n"
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int N;
    cin >> N;
    if (N <= 2)
    {
        cout << "nothing";
    }
    for (int i = N - 1; i > 1; --i)
    {
        if (isPrime(i))
        {
            cout << i << endl;
            return;
        }
    }
    cout << "nothing" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}