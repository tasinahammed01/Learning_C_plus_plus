#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {4, 5, 6, 2, 1};

    // ///////////////////////
    //  Find Smallest
    // ///////////////////////

    int small_Num = INT_MAX; // INT_MAX mean (+ infinity)
    int large_Num = INT_MIN; // INT_MIN mean (- infinity)
    int small_Index = 0;
    int max_Index = 0;

    ///////////////////////
    // method: 1
    ///////////////////////
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] < small_Num)
    //     {
    //         small_Num = arr[i];
    //     }
    // }
    ///////////////////////

    ///////////////////////
    // methond : 2 : easy way:
    ///////////////////////
    for (int i = 0; i < 5; i++)
    {
        small_Num = min(arr[i], small_Num);
        if(small_Num == arr[i]){
            small_Index = i;
        }
    }
    ///////////////////////

    // ///////////////////////
    //  Find Largest
    // ///////////////////////

    for (int i = 0; i < 5; i++)
    {
        large_Num = max(arr[i], large_Num);
        if(large_Num == arr[i]){
            max_Index = i;
        }
    }

    ///////////////////////

    // ///////////////////////
    //  Print Numbers
    // ///////////////////////
    cout << "Smallest Num :" << small_Num << endl;
    cout << "Largest Num :" << large_Num << endl;

    // ///////////////////////
    //  print index
    // ///////////////////////

    cout << "Smallest Num :" << small_Index << endl;
    cout << "Largest Num :" << max_Index << endl;

    return 0;
}