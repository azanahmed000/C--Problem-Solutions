/*Recursive function find power  of  a number */
#include<iostream>
using namespace std;
int power(int x,int n)
{
	if(n==0)
	{
		return 1;
		
	}
	else if(n==1)
	{
		return x;
	}
	else
	{
		return x*power(x,n-1);
		
	}
	
}
	int main()
	{
		int x,y;
		cout<<"Enter the numbers : ";
		cin>>x>>y;
		cout<<x<<"^"<<y<<"="<<power(x,y);
		
	}
	
	
