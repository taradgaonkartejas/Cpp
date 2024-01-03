// 5. Write a program to calculate factors of a given number.
#include <iostream>
using namespace std;

int main()
{
    int no;
    cout << "Please Enter No" << endl;
    cin >> no;
    cout << "Factors are: ";
    for (int i = 1; i <= no; i++)
    {
        if (no % i == 0)
        {
            cout << i << "  ";
        }
    }

    return 0;
}