#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cout << "Number is : " << i << " and the cube of " << i << " is : " << pow(i, 3) << endl;
    }
    return 0;
}