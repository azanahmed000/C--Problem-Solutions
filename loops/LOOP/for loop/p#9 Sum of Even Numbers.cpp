/*6. *Sum of Even Numbers*  
   Find the sum of all even numbers between 1 and n.
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	cout<<"Enter the  Number";
	cin>>n;
	
	for(int i=0 ; i<=n ;i+=2)
	{
		sum=sum+i;
			
	}
	cout<<"The sum of     "<<n<<"Even numbers are "<<sum;
	
}
