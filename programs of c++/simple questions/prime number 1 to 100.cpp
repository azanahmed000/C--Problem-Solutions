/*PRINT PRIME NUMBERS*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the range of prime number:";
	cin>>n;
	
	for(int i=2;i<=n;i++)
	{
		   bool point=true;
		
		for(int p=2;p<=i/2;p++)
		{ 
		 
			if(i%p==0)
			{
				point=false;
				break;
			}
			
			
		}
		if(point)
			{
				cout<<i<<",";
			}
	}
	
	
}
	
