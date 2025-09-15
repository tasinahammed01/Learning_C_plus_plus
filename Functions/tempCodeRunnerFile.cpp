#include <bits/stdc++.h>
using namespace std;

int factorial(int a);
int BinomalCoefficiant(int n, int r);

int main()
{

    int n, r;
    cin >> n >> r;

    BinomalCoefficiant(n, r);

    return 0;
}

int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}
int BinomalCoefficiant(int n, int r)
{
    int fact_N = factorial(n);
    int fact_R = factorial(r);

    return (fact_N / factorial(n - r)* fact_R);
}