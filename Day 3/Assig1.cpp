//1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
//Accept data (acceptInfo()) and display  using display member function.
//Also display total,percentage and grade.

#include<iostream>
using namespace std;
class student
{
	private :
		int roll_no,marks_1,marks_2,marks_3;
		public :
			void accepectInfo()
			{
				cout<<"Enter Roll Number"<<endl;
				cin>>roll_no;
				cout<<"Enter Marks 1 ,Marks 2 ,Marks 3 "<<endl; 
				cin>>marks_1>>marks_2>>marks_3;
				}
				void displayData()
				{
					cout<<"Roll Number="<<roll_no<<endl;
					cout<<"Marks 1 = "<<marks_1<<endl;
					cout<<"Marks 2 = "<<marks_2<<endl;
					cout<<"Marks 3 = "<<marks_3<<endl;
				}
				int total()
				{
					int total;
					total=marks_1+marks_2+marks_3;
					//cout<<"Total = "<<total<<endl;
					return total;
					}
				int percentage()
					{
						float percentage;
						percentage=total()/3;
						//cout<<"percentage = "<<percentage<<endl;
						return percentage;
					}
				void grade()
					{
						if(percentage()<35)
						{
							cout<<"Fail "<<endl;
						}
						else if(35<percentage() && percentage()<=65)
						{
							cout<<"Grade Is Pass "<<endl;
						}
						else if(65<percentage() && percentage()<=85)
						{
							cout<<"Grade is B "<<endl;
							
						}
						else if(85<percentage() && percentage()<=100)
						cout<<"Grade Is A +"<<endl;
					}
	
					};
					int main()	
					{
						student a;
						a.accepectInfo();
						a.displayData();
						cout<<"Total = "<<a.total()<<endl;
						cout<<"Percentage ="<<a.percentage()<<endl;
						a.grade();
						return 0;
					}

