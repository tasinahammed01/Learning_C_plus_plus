#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec = {2, 7, 11, 15};

    int targeted_value = 9;

    vector<int> pair;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if ((vec[i] + vec[j]) == targeted_value)
            {
                pair.push_back(i);
                pair.push_back(j);
            }
        }
    }

    cout << "Pair Index is: ";
    for (int i = 0; i < pair.size(); i++)
    {
        cout << pair[i] << " ";
    }
    cout << endl;

    cout << "Pair Number is: ";
    for (int i = 0; i < pair.size(); i++)
    {
        cout << vec[pair[i]] << " ";
    }

    return 0;
}

//////////////////
// Pair Sum

/*
Return pair in stored arry with targeted sum
*/
//////////////////