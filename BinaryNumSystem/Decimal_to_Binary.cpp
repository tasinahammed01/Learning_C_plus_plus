#include <bits/stdc++.h>
using namespace std;

int Decimal_to_Binary(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2; // we will get the last digit
        n /= 2;          // we will get the 1st digit

        ans += (rem * pow);
        pow *= 10; // increase the power  X10 every loop
    }

    return ans; // return the ans
}

int main()
{

    int decNum = 50;

    cout << Decimal_to_Binary(decNum) << endl;

    return 0;
}