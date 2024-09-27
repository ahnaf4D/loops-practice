#include <iostream>
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int countTerms = 0;
    int initialOddNumber = 1;
    while (countTerms != n)
    {
        cout << initialOddNumber << " ";
        sum += initialOddNumber;
        ++countTerms;
        initialOddNumber += 2;
    }
    cout << "\nSum of odd Natural Numbers : " << sum << endl;
    return 0;
}