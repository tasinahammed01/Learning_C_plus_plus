/*

For this we wiil apply 2 pointer approch

2 pointer mean here we will have 2 pointer .
Here we will increment one start pointer and decreament another end pointer.
and wee will stop it when start == 2nd pointer .
or in even size we will stop it when start pointer > end pointer.

## steps:

1. start = 0 ;   end = size -1;
2.we will run a loop with condision  (start < end)
3. if condition true then we will swap(arr[start], arr[end]) also  we will do start++  and end--;



we can you ^^swap^^ function.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}