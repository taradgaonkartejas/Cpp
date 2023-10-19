//2. Write a program to accept two integers x and n and compute x raised to n.

#include<iostream>
using namespace std;

int main()
{int x,n;
int ans=1;
cout<<"Enter Integer x"<<endl;
cin>>x;
cout<<"Enter Index n"<<endl;
cin>>n;
for (int i = 1; i <= n; i++)
{
    ans=ans*x;
}
cout<<"x raised to n= "<<ans<<endl;
    return 0;
}