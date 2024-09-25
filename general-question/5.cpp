/**************************************************
 *                                                *
 *                     *
 *                                                *
 *            Author : Ahnaf Tahmid               *
 *            Date   : 23/09/2024                 *
 *                                                *
 **************************************************/
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
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
    if (N <= 1)
    {
        cout << "not a prime" << endl;
    }
    else if (N == 2 || N == 3)
    {
        cout << "prime" << endl;
    }
    else if (N % 2 == 0 || N % 3 == 0)
    {
        cout << "not a prime" << endl;
    }
    else
    {
        if (isPrime(N))
        {
            cout << "prime" << endl;
        }
        else
        {
            cout << "not a prime" << endl;
        }
    }
}

int main()
{

    // int T;
    // cin >> T;
    // while (T--)
    // {
    solve();
    // }
    return 0;
}