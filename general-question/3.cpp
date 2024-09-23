/**************************************************
 *                                                *
 *          All praise to Allah (SWT)             *
 *                                                *
 *            Author : Ahnaf Tahmid               *
 *            Date   : 23/09/2024                 *
 *                                                *
 **************************************************/
#include <iostream>
using namespace std;
int main()
{
    int N, sum = 0;
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        cout << i << " ";
        sum += i;
    }
    cout << sum << endl;
    return 0;
}