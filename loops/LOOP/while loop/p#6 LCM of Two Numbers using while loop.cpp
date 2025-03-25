/**LCM of Two Numbers*  
Find the Least Common Multiple (LCM) of two numbers using nested loops.  
- Outer loop: Iterates potential multiples.  
- Inner loop: Checks if the multiple is divisible by both numbers.*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout<<"Enter any two numbers to find  LCM  "<<endl;
	cout<<"Enter first no :";
	cin>>a;
	cout<<"Enter second no :";
	cin>>b;
	cout<<"The LCM of "<<a<<" & "<<b<<" is ";
	int i=1;
	while(i<=1000)
	{
		if(i%a==0 && i%b==0)
		{
			cout<<i;
			break;
		}
		i++;
	}
	
	
	
}
