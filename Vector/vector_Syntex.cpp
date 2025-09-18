#include <bits/stdc++.h>
using namespace std;
// #include <vector>

int main()
{

    vector<int> vec = {1, 2, 3};
    vector<char> ch = {'a', 'b', 'c', 'd', 'e'};

    for (int i : vec)
    {
        cout << i << endl;
    }

    for (char ch_value : ch) // here we have to use char cz we are showing char value. if we use int it will show us ascii value of these character.
    {
        cout << ch_value << endl;
    }

    // cout << vec[2] << endl;

    return 0;
}



////////////////////////////
// syntex
///////////////////////////

// vector<data_type>  var_name = { values here};

// for each loop:

// for (data_type  any_name_here : var_name) // here we have to use char cz we are showing char value. if we use int it will show us ascii value of these character.
// {
//     cout << any_name_here_that_declared << endl;
// }