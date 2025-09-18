# Linear Search 🔍 - Data Structures & Algorithms (DSA)

[![DSA](https://img.shields.io/badge/DSA-LinearSearch-blue)](https://github.com/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-orange)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green)](https://opensource.org/licenses/MIT)

Linear Search is the simplest searching algorithm in computer science.  
It **sequentially checks each element** of an array until the target element is found or the array ends.

---

## 📌 Algorithm

1. Start from the first element of the array.
2. Compare the current element with the target.
3. If it matches, return the index.
4. If it doesn't match, move to the next element.
5. Repeat until the element is found or the array ends.
6. If the element is not found, return -1.

---

## 💻 Pseudocode


---

## 🖥️ C++ Implementation

```cpp
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i; // element found
    }
    return -1; // element not found
}

int main() {
    int arr[] = {4, 5, 6, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    int index = linearSearch(arr, n, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
