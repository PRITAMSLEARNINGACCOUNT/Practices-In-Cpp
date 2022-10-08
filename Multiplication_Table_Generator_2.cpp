#include <iostream>
using namespace std;

int main()
{
    int a, b,c;
    cout << "Enter a number for generate a Multiplication Table" << endl;
    cin >> a;
    cout << "Enter how long you want to generate the Multiplication Table" << endl;
    cin >> b;
    cout << "Enter From where you want to start genrate The Multiplication Table" << endl;
    cin >> c;
    cout << "So the Multiplication Table of " << a << " is " << endl;
    while (c<=b)
    {
        cout << a << "*" << c << "=" << a * c << endl;
        c++;
    }
    

    return 0;
}