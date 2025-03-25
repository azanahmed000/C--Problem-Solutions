/*Count Divisors of a Number
Count how many numbers between 1 and n divide the number n perfectly.
Example: Input: n = 6 ? Output: 4 (Divisors: 1, 2, 3, 6).*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	cout<<"Enter the number :";
	cin>>n;
	cout<<"Divisors are:";
	for(int i=1 ;i<=n;i++)
	{
		if(n%i==0)
		{
			 sum=0;
			sum=sum+i;
		    cout<<sum<<',';	
		}
		
	}
	
	
}
