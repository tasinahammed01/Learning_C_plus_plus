#include <bits/stdc++.h>
using namespace std;

void sumOfNum(int a, int b);

int main()
{

    int x, y;
    cin >> x >> y;

    sumOfNum(x, y);

    return 0;
}

void sumOfNum(int a, int b)
{
    int sum = a + b;
    cout << "Sum is = " << sum;
}