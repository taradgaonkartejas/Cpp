// 3. Create a class Book with data members as bname,id,author,price. Write AcceptBook function .
//  Also add the display function. Create Default and Parameterized constructors. Create
// the object of this class in main method and invoke all the methods in that class.
#include <iostream>
#include <string.h>
using namespace std;
class book
{
private:
    string bname, author;
    int id, price;

public:
    book()
    {
        bname = "NA";
        author = "NA";
        id = 0;
        price = 0;
    };
    book(string bname, string author, int id, int price)
    {
        this->bname = bname;
        this->author = author;
        this->id = id;
        this->price = price;
    };
    void accept()
    {
        cout << "Enter Book Name = " << endl;
        getline(cin, bname);
        cout << "Enter Author Name = " << endl;
        getline(cin, author);
        cout << "Enter Book Id = " << endl;
        cin >> id;
        cout << "Enter Book Price = " << endl;
        cin >> price;
        cout << "\n---------------------------------\n"
             << endl;
    }
    void display()
    {
        cout << "Book Name = " << bname << endl;
        cout << "Author Name = " << author << endl;
        cout << "Book Id = " << id << endl;
        cout << "Book Price = " << price << endl;
        cout << "\n---------------------------------\n"
             << endl;
    }
    ~book(){};
};

int main()
{
    book b;
    b.display();
    book b1("DevC++", "Tejas", 123, 500);
    b1.display();
    book b2;
    b2.accept();
    b2.display();

    return 0;
}