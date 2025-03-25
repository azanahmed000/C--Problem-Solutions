/*Find the First Factor of a Number
Write a program to find the smallest factor of a given number (greater than 1).
Example: Input: 28 ? Output: 2.*/
#include<iostream>
using namespace std;
int main()
{
	int num; 
	int f=1;
	cout<<"Enter the number :";
	cin>>num;
	
	for(int i=2; i<=num; ++i)
	{
		if(num%i==0)
		{
			cout<<"The smallest factor is : "<<num<<" is "<<i;
			break;
		}
	}	
		
}
