// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//         }

//     return 0;
// }



// +++++++++++++++++++++++++++++++++++++++++++++++++




//  1
//  1 2
//  1 2 3 
//  1 2 3 4


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < i + 1; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//         }

//     return 0;
// }








//  1
//  2 1
//  3 2 1 
//  4 3 2 1


#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1 ; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
        }

    return 0;
}