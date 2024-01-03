//2 Create a class Person with data members as name, age, city. 
//members. Also add accept and  display function. . Create the 
//object of this class in main method and invoke all the methods in that class. 

#include<iostream>
#include<string.h>
using namespace std;
class person
{
	private:
		string name,city;
		int age;
		public:
			void info()
			{
				cout<<"Enter Name "<<endl;
				getline(cin,name);
				cout<<"Enter Age "<<endl;
				cin>>age;
				cout<<"Enter City "<<endl;
				cin>>city;
				}
				void display()
				{
					cout<<"Name = "<<name<<endl;
					cout<<"Age = "<<age<<endl;
					cout<<"City = "<<city<<endl;
				}
				
	
};
int main()
{
	person s;
	s.info();
	s.display();
	return 0;
	
}
