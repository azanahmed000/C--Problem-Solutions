/*write a program that show the sum of even and odd numbers*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	int o=0,e=0;
	cout<<"Enter the Number :";
	cin>>n;
	while(i<=n)
	{
		if(i%2==0)
		{
			e+=i;
		
		}
		else
		{
			o+=i;
		}
		
		i++;
	}
	cout<<"The Sum of Even number is :"<<e<<endl<<"\n";
	cout<<"The Sum of Odd  number is :"<<o;
	 
	 
	
	
	
}
