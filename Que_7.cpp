// 7. Write a menu driven program to do following operations :
// a) Compute area of circle
// b) Compute area of rectangle
// c) Compute area of triangle
// d) Exit
// Display menu, ask choice to the user, depending on choice accept the parameters and perform the
// operation. Continue this process until user selects exit option.
#include <iostream>
using namespace std;

int main()
{
    int no;
    while (no != 4)
    {
        cout << "Enter Choise of following" << endl;
        cout << "1. Compute area of circle" << endl;
        cout << "2. Compute area of rectangle" << endl;
        cout << "3. Compute area of triangle" << endl;
        cout << "4. Exit" << endl;
        cin >> no;
        switch (no)
        {
        case 1:
        {
            int r, area;
            cout << "Enter radius of circle" << endl;
            cin >> r;
            area = 22 / 7 * r * r;
            cout << "Area of circle is " << area << endl;

            cout << "---------------------------------" << endl;
        }
        break;
        case 2:
        {
            int l, b, area;
            cout << "Enter length of rectangle" << endl;
            cin >> l;
            cout << "Enter bredth of rectangle" << endl;
            cin >> b;
            area = l * b;
            cout << "Area of Rectangle is " << area << endl;
            cout << "---------------------------------" << endl;
        }
        break;
        case 3:
        {
            int b, h, area;
            cout << "Enter Base of rectangle" << endl;
            cin >> b;
            cout << "Enter Height of rectangle" << endl;
            cin >> h;
            area = 0.5 * b * h;
            cout << "Area of Rectangle is " << area << endl;
            cout << "---------------------------------" << endl;
        }
        break;
        case 4:
           
            break;
        default:
            cout << "Invalid Entry" << endl;
            cout << "---------------------------------" << endl;
            break;
        }
    }

    return 0;
}