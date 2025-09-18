#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {4, 5, 6, 2, 1};

    double price[5] = {3.2, 5.3, 5.7, 19.4, 38.3};

    for (int i = 0; i < 5; i++)
    {
        cout << "Arr: " << arr[i] << endl;
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "Price: " << price[j] << endl;
    }

    //  get size:

    cout << "Size of array: " << sizeof(arr) << endl;

    return 0;
}