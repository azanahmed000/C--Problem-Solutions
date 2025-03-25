/*### 4. *Check Perfect Numbers*  
Find all perfect numbers between 1 and 100 using nested loops.  
- Outer loop: Iterates through numbers.  
- Inner loop: Calculates the sum of proper divisors for each number.
*/
#include<iostream>
using namespace std;
int main()
{
	int i;

	int divisor;
	cout<<"The perfect numbers 1 upto 100 is :"<<endl;
	
	for(i=1;i<=100;i++)
	{ 
		int sum=0;
		for(int n=1;n<i;n++)
		{
			
			
			
			if(	i%n==0)
			{
				
				sum=sum+n;
				
			}
			
		
		}
			if(sum==i)
			{
			cout<<"The sum of divisors of "<<i<<" is "<<sum<<endl<<endl;
			}
		
		
		
		
		
	}
	
	
}
