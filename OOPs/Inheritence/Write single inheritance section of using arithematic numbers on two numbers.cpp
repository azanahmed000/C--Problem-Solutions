//Write a program that declares two clases.The parent class is called 
//simple that has two data members a and b to store two numbers .
//It also has four member functions:
//- The add() function adds two numbers and display the sum.	
//- The sub() function subtract  two numbers and display the result.
//- The mult() function multiply two numbers and display the result.
//- The divi() function divides two numbers and display the result.
//	The child class is called Complex that overrides all four functions.
//Each function on the child class checks the value of data members.It 
//calls the correspoding members function in the parent class if the values are greater than 0.
//Otherwise it display error message.
//
#include<iostream>
using namespace std;
class Simple
{
	protected:
		int a;
		int b;
	public:
		Simple()
		{
			a=b=0;
		}
		void in()
		{
			cout<<"Enter the value of a :"<<endl;
			cin>>a;
			cout<<"Enter the value of b :"<<endl;
			cin>>b;
			
		}
		void add()
		{
			
			cout<<"a+b = "<<a+b<<endl;
		}
			void subtract()
		{
			cout<<"a-b = "<<a-b<<endl;
		}
			void multiply()
		{
			cout<<"a*b = "<<a*b<<endl;
		}
			void divides()
		{
			cout<<"a/b = "<<a/b<<endl;
		}
};	
class complex :public Simple
{
	public:
	void add()
	{
		if (a<=0||b<=0)
			{
				cout<<"Invlaid values !"<<endl;
			}
		else
		{
		Simple::add();
		}
	}
	void subtract()
	{
		if (a<=0||b<=0)
			{
				cout<<"Invlaid values !"<<endl;
			}
		else
		{
		Simple::subtract();
		}
	}
	void multiply()
	{
		if (a<=0||b<=0)
			{
				cout<<"Invlaid values !"<<endl;
			}
		else
		{
		Simple::multiply();
		}
	}
	void divides()
	{
		if (a<=0||b<=0)
			{
				cout<<"Invlaid values !"<<endl;
			}
		else
		{
		Simple::divides();
		}
	}
	
};
int main()
{
	complex c;
	c.in();
	c.add();
	c.subtract();
	c.multiply();
	c.divides();
}
