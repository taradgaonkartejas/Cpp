// 8. Write a program to print all prime numbers between 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter No" << endl;
    cin >> n;
    if (n == 1)
    {
        cout << "1";
    }
    else if (n == 2)
    {
        cout << "1    2";
    }
    else if (n > 2)
    {
        cout << "1    2   ";
        for (int j = 1; j <= n; j++)
        {
            bool flag = true;
            for (int i = 2; i < j; i++)
            {
                if (j % i == 0)
                {
                    flag = true;
                    break;
                }
                else
                {
                    flag = false;
                }
            }

            if (flag == false)

                cout << j << "   ";
        }
    }
    else
        cout << "Invalid Entery";
    return 0;
}