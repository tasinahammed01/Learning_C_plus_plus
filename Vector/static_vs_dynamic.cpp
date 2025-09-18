// 🔹 Static vs Dynamic Memory Allocation

// 1️⃣ Static Memory Allocation
// 1. Memory is allocated at compile-time.
// 2. Size must be known before running the program.
// 3. Stored in stack memory.
// 4. Memory is automatically freed when the variable goes out of scope.
// 5. Fast, but less flexible.

// 2️⃣ Dynamic Memory Allocation
// 1.Memory is allocated at runtime.
// 2.Size can be decided while the program is running.
// 3.Stored in heap memory.
// 4.Must be manually freed (using delete in C++, free() in C).
// 5.Slower than static, but flexible.

// Q: What’s the difference between static and dynamic memory allocation?
// Static allocation happens at compile - time and memory size is fixed.It is stored in the stack, and memory is automatically freed when the program exits a scope.Dynamic allocation happens at runtime, size can be chosen by the user, and memory is taken from the heap.But we must manually free it using delete in C++(or free() in C).Static is faster but less flexible, while dynamic is flexible but slightly slower.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    // Size : 5
    // Capacity : 8

    //  when size is less then value , it multiple it's ( recent size X 2 ).

    return 0;
}