#include <bits/stdc++.h>
using namespace std;

void changeArr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{

    int arr[] = {1, 2, 3};

    changeArr(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}

// in C++ arr is like a pointer so that if you pass the arr it will be pass by refference . it means it will send the addres then we can chance from the main furction .
