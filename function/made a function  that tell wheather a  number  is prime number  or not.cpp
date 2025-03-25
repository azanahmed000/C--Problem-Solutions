/*made a function  that tell wheather a  number  is prime number  or not*/

#include<iostream>
using namespace std;
int prime(int num);
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	prime(n);
}

int prime(int num)
{
	
	if (num <= 1) 
	{
		cout << "The entered number " << num << " is not a prime number.";
		return 0;
	}

	int i,flag=1;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;			
		}
		
	}
	if(flag==1)
		{
			cout<<"Enter number "<<num<<" is a prime number ";
		}
		else
		{
			cout<<"The enter number "<<num<<"  is not a prime number ";
		}
	
}

