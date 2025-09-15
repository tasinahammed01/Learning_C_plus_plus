#include <bits/stdc++.h>
using namespace std;

void Print_Hello_World(int n);

int main()
{
    int x;
    cin >> x;
    Print_Hello_World(x);
    
    return 0;
}

void Print_Hello_World(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Hello World!" << endl;
    }
}