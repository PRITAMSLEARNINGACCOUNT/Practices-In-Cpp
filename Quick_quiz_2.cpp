#include <iostream>
using namespace std;
int main()
{
    int array[5];
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter The " << i + 1 << " Number " << endl;
        while (j < 5)
        {
            cin >> array[j];
            j++;
            if (i == i)
            {
                break;
            }
        }
    }
    int ab = 0;
    do
    {
        cout << "So the " << ab + 1 << " Number is " << array[ab] << endl;
        ab++;
    } while (ab < 5);

    return 0;
}