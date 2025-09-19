#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec = {2, 2, 1, 1, 1, 2, 2};

    int size = vec.size();
    sort(vec.begin(), vec.end());

    int feq = 0;
    int mejority_element = vec[0];

    for (int i = 0; i < size; i++)
    {
        if (vec[i] == vec[i + 1])
        {
            feq++;
        }
        else
        {
            feq = 0;
            mejority_element = vec[i];
        }
        if (feq  > size / 2)
        {
            mejority_element = vec[i];
        }
    }

    cout << "Mejority element is : " << mejority_element << endl;

    return 0;
}