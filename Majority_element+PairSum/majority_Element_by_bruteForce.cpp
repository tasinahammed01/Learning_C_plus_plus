#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec = {2, 2, 1, 1, 1, 2, 2};

    int size = vec.size();

    int feq = 0;
    int mejority_element = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (vec[i] == vec[j])
            {
                feq++;
            }
        }

        if (feq > size / 2)
        {
            mejority_element = vec[i];
        }
    }

    cout << "Mejority element is : "  << mejority_element << endl;

    return 0;
}