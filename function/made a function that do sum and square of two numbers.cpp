/*made a function that do sum and square of two numbers */
#include<iostream>
using namespace std;
int large(int& a,int& b)
{
	if(a>b)
	{
		a*=a;
		cout<<a;
	}
	else
	{
		b*=b;
		cout<<b;
	}
	
}
int sum(int a,int b)
{
	int c=a+b;
	return c;
}
int main()
{
	int a,b;
	cout<<"Enter any two numbers : \n\n";
	cin>>a>>b;
	cout<<"Square of large number is :  \n\n\n";
	large(a,b);
	cout<<"\n\nSum of squares is :  ";
	int c=sum(a,b);
	cout<<c;
	
}
