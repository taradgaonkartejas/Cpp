// 1:Write a program that accepts numbers continuously as long as the number is positive and prints the
// sum of the given numbers.
#include <iostream>
using namespace std;

int main()
{
    int no = 0;
    int sum = 0;
    while (no > 0)
    {
        sum += no;
        cout << "Please Enter No" << endl;
        cin >> no;
    }
    cout << "Sum of given No is " << sum << endl;
    return 0;
}