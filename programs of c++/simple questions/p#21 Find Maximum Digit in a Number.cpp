/*Find Maximum Digit in a Number
Write a program to find the largest digit in a given number using a for loop.
Example: Input: 7632 ? Output: 7.*/
#include<iostream>
using namespace std; 
int main()
{
	int n;
	int large=1;
	
	cout<<"Enter the Number :";
	cin>>n;
	cout<<"\n\n\nThe Largest number is:";
	for(;n>0;n/=10)
	{
		int digit=n%10;
		if(digit>large)
		{
			large=digit;
		}
	}
	cout<<large;
}
