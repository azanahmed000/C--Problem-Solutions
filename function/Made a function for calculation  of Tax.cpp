/*Made a function for calculation  of Tax */

#include<iostream>
using namespace std;
int tax(int pay)
{
	int temp;
	if(pay>50000)
	{
		temp=pay/10;
		
		
	}	
	
	else if(pay>25000)
	{
		temp=pay/8;
		
	}
	else if(pay>15000)
	{
		temp=pay/5;
		
	}
	else if(pay>0)
	{
		temp=2;
	}
	
	return temp;
	
	
	
}
int main()
{
	int pay,amount;
	cout<<"Enter your salary : ";
	cin>>pay;
	amount=tax(pay);
	cout<<"Tax will be upto "<<amount<<" of total salary ";
}
