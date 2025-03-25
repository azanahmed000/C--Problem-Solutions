/*
Check Armstrong Number
Check if a number is an Armstrong number (the sum of the cubes of its digits equals the number).
Example: Input: 153 ? Output: Yes.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,orignalnum;
	int digit,sum=0;
	int count=0;
	
	
	cout<<"Enter the number :";
	cin>>num;
	
	orignalnum=num;
	
	for(int i=num ; i!=0 ;i/=10)
	{
		count++;
	}
	
	for(int i=num ; i!=0 ;i/=10)
	{
		int digit=i%10;
		
		sum+= pow(digit,count);
	
	}	if(sum==orignalnum)
		{
			cout<<"\n\n\nYes the Given number is an Armstrong Number :"<<orignalnum;
		}
		else 
		{
			cout<<"\n\n\nThe given number is not an Armstrong Number:"<<orignalnum;
		}
	
	
}
