#include <iostream>
#include <limits.h>
// learning to use limits.h
// how to compare min , max using condtionals
// how to find out the average of a number
using namespace std;
float getAverageOfNumber(float sum, int howMuch)
{
    return sum / howMuch;
}
int main()
{
    int count_int = 0;
    int max_int = INT_MIN;
    int min_int = INT_MAX;
    float sum = 0;
    float average_int;
    while (true)
    {
        int num;
        cin >> num;
        if (num == -1)
        {
            break;
        }
        if (num >= 0)
        {
            count_int++;
            sum += num;
            if (num > max_int)
            {
                max_int = num;
            }
            if (num < min_int)
            {
                min_int = num;
            }
        }
    }
    if (count_int > 0)
    {
        average_int = getAverageOfNumber(sum, count_int);
        cout << "Number of positive integers is: " << count_int << endl;
        cout << "The maximum value is: " << max_int << endl;
        cout << "The minimum value is: " << min_int << endl;
        cout << "The average is: " << fixed << setprecision(2) << average_int << endl;
    }
    else
    {
        cout << "nothing" << endl;
    }
    return 0;
}
