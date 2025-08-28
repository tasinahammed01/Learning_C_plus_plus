#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Input a 2 value:\n";
    cin >> a >> b;
    cout << "Sum is:" << a+b << endl;
    cout << "Minus is:" << a-b << endl;
    cout << "multiplied is:" << a*b << endl;
    cout << "divided is:" << (float)a/b << endl; //type casting
    cout << "modulas is:" << a%b << endl;

    return 0;
}