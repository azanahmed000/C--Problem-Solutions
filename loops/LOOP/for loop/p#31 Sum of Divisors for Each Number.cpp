/*
### 3. *Sum of Divisors for Each Number*  
For every number from 1 to 50, find the sum of its divisors:  
- Outer loop: Iterates over numbers 1 to 50.  
- Inner loop: Finds divisors of the current number.
*/
#include<iostream>
using namespace std;
int main()
{
	int i;

	int divisor;
	cout<<"Sum of Divisors 1 upto 50 is :"<<endl;
	
	for(i=1;i<=50;i++)
	{ 
		int sum=0;
		for(int n=1;n<=i;n++)
		{
			
			
			
			if(	i%n==0)
			{
				
				sum=sum+n;
				
			}
		
		}
		
			cout<<"The sum of divisors of "<<i<<" is "<<sum<<endl<<endl;
			
		
		
		
		
		
	}
	
	
}
