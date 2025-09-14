

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;

//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n; j++)
//         {
//             cout << ("*");
//         }
//             cout << ("\n");

//     }
// }

// printing character

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;

//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';

//         for (int j = 0; j < n; j++)
//         {
//             cout << ch;
//             ch += 1;
//         }
//         cout << "\n";
//     }
// }

// Printing number

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int num =0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            num+=1;
            cout << num << " ";
        }
            cout << endl ;

    }
}