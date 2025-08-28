#include <iostream>
using namespace std;

int main()
{
    int sumOdd = 0;
    int n = 0;

    cout << "Enter a number:\n ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {

            sumOdd += i;
        }
    }
    cout <<"Sum of Odd number is :" << sumOdd << endl;
    return 0;
}