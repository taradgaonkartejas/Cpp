//4. Create a class Point with data members as x,y. Add AcceptPoint and  add the display function. Create the object of this 
//class in main method and invoke all the methods in that class. 
#include<iostream>
using namespace std;
class point
{
	private :
		int x,y;
		public :
			void acceptdata()
			{
				cout<<"Enter X ="<<endl;
				cin>>x;
				cout<<"Enter Y = "<<endl;
				cin>>y;
			}
			void displaydata()
			{
				cout<<"("<<x<< ","<<y<<")"<<endl;
			}
	
};
int main()
{
	point p;
	p.acceptdata();
	p.displaydata();
	return 0;
}
