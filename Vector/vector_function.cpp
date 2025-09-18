#include <bits/stdc++.h>
using namespace std;
// #include <vector>

int main()
{

    vector<int> vec = {1, 2, 3};

    cout << "Size: " << vec.size() << endl; // normal size

    vec.push_back(4);
    vec.push_back(5);
    cout << "Size after push_back: " << vec.size() << endl; // size after push.back

    vec.pop_back();
    cout << "Size after pop_back: " << vec.size() << endl; // size after pop.back

    cout << "Front Value: " << vec.front() << endl;
    cout << "End Value: " << vec.back() << endl;


    cout << "Value of index 1 is: "<< vec.at(1) << endl;



    for (int value : vec)
    {
        cout << value << endl;
    }

    return 0;
}

/*
///////////////////////////////////

vector function:
1. size (show us the size of vector)
2. push_back (add value to the end of the array)
3. pop_back ( pop mean delete value from end form array)
4. front (it will print front value of an array)
5. back (it will print end value of an array)
6. at (it use to get ay specific index value)

///////////////////////////////////
*/