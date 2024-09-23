/**************************************************
 *                                                *
 *          All praise to Allah (SWT)             *
 *                                                *
 *            Author : Ahnaf Tahmid               *
 *            Date   : 23/09/2024                 *
 *                                                *
 **************************************************/
// Not assigning rather directly add value that helps from variable reseting inside loop issue
#include <iostream>
#include <cmath>
using namespace std;
int getProperDivisorsSum(int n, int sqrtVal)
{
    int sum = 0;
    for (int i = 1; i <= sqrtVal; ++i)
    {
        int divisionVal = n / i;
        if (n % i == 0) // check with n value
        {
            sum = sum + (divisionVal + i);
        }
    }
    sum -= n;
    return sum;
}
int main()
{
    for (int i = 1; i <= 500; ++i)
    {
        int sqrtVal = sqrt(i);
        int perfectNum = getProperDivisorsSum(i, sqrtVal);
        if (perfectNum == i)
        {
            cout << perfectNum << endl;
        }
    }
    return 0;
}