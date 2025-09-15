#include <bits/stdc++.h>
using namespace std;

int Binary_To_Decimal(int n)
{
    int ans = 0;
    int power = 1;

    while (n > 0)
    {
        int rem = n % 10;   // last digit (binary digit 0/1)
        ans += rem * power; // add contribution
        n /= 10;            // remove last digit
        power *= 2;         // move to next power of 2
    }
    return ans;
}

int main()
{
    int BinaryNum = 1010; 
    cout << Binary_To_Decimal(BinaryNum) << endl;
    return 0;
}
