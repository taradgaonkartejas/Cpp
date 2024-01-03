// 4. Write a program to calculate factorial of a number.
// For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120
#include <iostream>
using namespace std;

int main()
{
    int no, fact = 1;
    cout << "Please Enter No" << endl;
    cin >> no;
    if (no == 0)
    {
        cout << "Factorial of 0 is 1" << endl;
    }
    else if (no > 0)
    {
        for (int i = 1; i <= no; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << no << " is " << fact << endl;
    }
    else
    {
        cout << "Invalid No" << endl;
    }

    return 0;
}