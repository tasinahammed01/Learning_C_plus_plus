// Printing number

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int num =0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            num+=1;
            cout << num << " ";
        }
            cout << endl ;

    }
}