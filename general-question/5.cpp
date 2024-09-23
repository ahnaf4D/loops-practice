/**************************************************
 *                                                *
 *          All praise to Allah (SWT)             *
 *                                                *
 *            Author : Ahnaf Tahmid               *
 *            Date   : 23/09/2024                 *
 *                                                *
 **************************************************/
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n, int sqr)
{
    bool isPrimeN;
    for (int i = 2; i <= sqr; ++i)
    {
        if (n % i != 0)
        {
            isPrimeN = true;
        }
        else
        {
            isPrimeN = false;
        }
    }
    return isPrimeN;
}
int main()
{

    int N;
    cin >> N;
    if (N <= 1)
    {
        cout << "not a prime" << endl;
    }
    else
    {
        int sqrtVal = sqrt(N);
        bool isPrimeNum = isPrime(N, sqrtVal);
        if (isPrimeNum)
        {
            cout << "prime" << endl;
        }
        else
        {
            cout << "not a prime number" << endl;
        }
    }
    return 0;
}