// linear search is a fixed algorithom.

// IN this code

//   for (int i = 0; i < 5; i++)
// {
//     large_Num = max(arr[i], large_Num);
//     if(large_Num == arr[i]){
//         max_Index = i;
//     }
// else{
//             small_Index = -1;

//         }
// }

// This if condition  is called linear search. We ar matcing our taget value in the arr[i] == target value.
//  if   we dont get the targeted value in array then we will return -1 . which mean num not found in array . cz there is noo index like -1 .

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {4, 5, 6, 2, 1};

    int targeted_value = 5;

    int index = -1;

    for (int i = 0; i < 5; i++)
    {
        if (targeted_value == arr[i])
        {

            index = i;
            break;
        }
    }

    cout << "Index : " << index << endl;

    return 0;
}