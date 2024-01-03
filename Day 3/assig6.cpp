//5. Create a class ComplexNumber with data members real, imaginary. Create  AcceptComplexNumber() and the display function. 
//Create the object of this class in main method and invoke all the methods in that class.
#include<iostream>
using namespace std;
class complexNo
{
	private :
		int real_No,img_No;
		public :
			void acceptComlexNo()
			{
				cout<<"Enter Real Number"<<endl;
				cin>>real_No;
				cout<<"Enter Imaginary Number"<<endl;
				cin>>img_No;
				
			}
			void display()
			{
				cout<<real_No <<" + "<<img_No<<"i"<<endl;
				
			}
};
int main()

{
	complexNo n;
	n.acceptComlexNo();
	n.display();
	
	return 0;
}
