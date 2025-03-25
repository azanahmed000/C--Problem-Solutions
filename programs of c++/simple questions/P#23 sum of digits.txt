/*Sum of Odd Digits in a Number
Calculate the sum of all odd digits in a given number.
Example: Input: 1357 ? Output: 16.
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	int digit=0;
	cout<<"Enter the Number :";
	cin>>n;
	
	for(;n>=1; n/=10)
	{
		 digit=n%10;
		if(digit%2!=0)
		{
			
			sum=sum+digit;
			
		}
		//cout<<"The sum is: "<<sum;
		
	}
	cout<<"The sum is: "<<sum;
	
	
}
