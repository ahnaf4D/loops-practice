#include <iostream>
#define endl "\n"
using namespace std;
int main()
{
    int Terms, summation_terms = 0;
    cin >> Terms;
    for (int i = 1; i <= Terms; ++i)
    {
        cout << i << " * " << i << " = " << i * i << endl;
        summation_terms += i * i;
    }
    cout << summation_terms << endl;
    return 0;
}