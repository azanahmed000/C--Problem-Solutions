/*Write a program to input  any  integer  value and then to find out of the given number is  prime 
number  or  not  by passing  number to a function  as pointer  argument.  */
#include<iostream>
using namespace std;
int prime(int* p )
{
	for(int i=2;i<*p/2;i++)
	{
		if(*p%i==0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
		
	}
	
}
int main()
{
	int a;
	
	cout<<"Enter the any number : ";
	cin>>a;
	int p=prime(&a);
	if(p==0)
	{
		cout<<"Given number is not a prime number. ";
	}
	else
	{
		cout<<"Give number is  a prime number. ";
	}
	
}
