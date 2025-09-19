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
        if (feq == 0)
        {
            mejority_element = vec[i];
            feq = 1;
        }
        else if (mejority_element == vec[i])
        {
            feq++;
        }
        else
        {
            feq--;
        }
    }

    cout << "Mejority element is : " << mejority_element << endl;

    return 0;
}