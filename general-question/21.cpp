#include <iostream>
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int count = 1;
    int initialEven = 2;
    while (count != n)
    {
        cout << initialEven << " ";
        sum += initialEven;
        ++count;
        initialEven += 2;
        if (n == count)
        {
            cout << initialEven << " ";
            sum += initialEven;
            break;
        }
    }
    cout << "\nSum of even Natural Numbers : " << sum << endl;
    return 0;
}