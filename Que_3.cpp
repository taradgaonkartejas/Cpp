// 3. Write a program to accept a character, an integer n and display the next n characters.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int n;
    cout << "Please Enter any Character" << endl;
    cin >> ch;
    cout << "Enter integer n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout<<ch;
    }
    cout<<endl;
    return 0;
}