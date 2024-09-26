#include <iostream>
#define endl "\n"
using namespace std;
int main()
{
    int N, sum = 0; // always add zero for mathematical operation in C++
    cin >> N;
    if (N == 0)
    {
        cout << 0 << endl;
    }
    else if (N > 0)
    {
        while (N != 0)
        {
            int reminder = N % 10;
            sum += reminder;
            N /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}