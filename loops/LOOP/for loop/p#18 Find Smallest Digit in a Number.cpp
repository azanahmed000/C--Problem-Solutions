/*Find Smallest Digit in a Number
Write a program to find the smallest digit in a given number.
Example: Input: 92845 ? Output: 2.
*/
#include<iostream>
using namespace std;
int main()
{
	int n,small=9;
	int sum;
	cout<<"Enter the number";
	cin>>n;
	
	cout<<"The smallest number is :";
	
	for( ;n>0;n/=10)
	{
		int sum=n%10;
		if(sum<small)
		{
			small=sum;
		}
		
		
	}
	cout<<small<<endl;
}
