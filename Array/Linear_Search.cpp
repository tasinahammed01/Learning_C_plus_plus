// /Linear Search is the simplest searching algorithm in computer science.  
// It **sequentially checks each element** of an array until the target element is found or the array ends.

// ---

// ## 📌 Algorithm

// 1. Start from the first element of the array.
// 2. Compare the current element with the target.
// 3. If it matches, return the index.
// 4. If it doesn't match, move to the next element.
// 5. Repeat until the element is found or the array ends.
// 6. If the element is not found, return -1.

// ---

// ## 💻 Pseudocode
// ```
// function linearSearch(array, target):
// for i from 0 to length(array)-1:
// if array[i] == target:
// return i
// return -1



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