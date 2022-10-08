#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a number for generate a Multiplication Table" << endl;
    cin >> a;
    cout << "Enter how long you want to generate the Multiplication Table" << endl;
    cin >> b;
    cout << "So the Multiplication Table of " << a << " is " << endl;
    for (int i = 1; i <= b; i++)
    {
        cout << a << "*" << i << "=" << a * i << endl;
    }

    return 0;
}