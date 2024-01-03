//2. Create a class Date with data members as dd, mm, yy. Create AcceptDate function. Also add the display function. Create the 
//object of this class in main method and invoke all the methods in that class. 
#include<iostream>
using namespace std;
class date
	{
	private :
	int date,month,year;	
	public:
		void acceptData()
		{
			cout<<"Enter Date = "<<endl;
			cin>>date;
			cout<<"Enter Month = "<<endl;
			cin>>month;
			cout<<"Enter Year = "<<endl;
			cin>>year;
		}
	void displayData()
	{
		cout<<date<<"-"<<month<<"-"<<year<<endl;
	}
	
};
int main()
{
	date d;
	d.acceptData();
	d.displayData();

return 0;	
}
