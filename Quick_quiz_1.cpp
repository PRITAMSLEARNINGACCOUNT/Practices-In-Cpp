#include <iostream>
using namespace std;
int main()
{
    int a = 6;
    cout << "The Multiplication table of " << a << " is " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << a << "*" << i << "=" << a * i << endl;
    }

    return 0;
}