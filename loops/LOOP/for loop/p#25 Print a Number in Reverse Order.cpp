/*Print a Number in Reverse Order
Write a program to display a number in reverse order.
Example: Input: 1234 ? Output: 4321*/

#include<iostream>
using namespace std;
int main()
{
	int num;
	int reverse;
	cout<<"Enter the number :";
	cin>>num;
	cout<<"The number num "<<num<<" in reverse order is ";
	for(;num!=0;num/=10)
	{
		reverse=num%10;
	
		cout<<reverse;
	}
	
		
	
}
