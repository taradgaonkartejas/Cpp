// 6. Accept two numbers and calculate GCD of them.
#include <iostream>
using namespace std;

int main()
{
    int no1, no2, j;
    cout << "Please Enter No1" << endl;
    cin >> no1;
    cout << "Please Enter No2" << endl;
    cin >> no2;
    for (int i = 1; i <= no1; i++)
    {
        if (no1 % i == 0 && no2 % i == 0)
        {
            j=i;
        }
    }
    cout << "GCD of above 2 numbers is " << j;
    return 0;
}