/*wirte a program that display following equation in n series 
x-(x^2)/2!+..........*/
#include<iostream>
#include<cmath>
using namespace std;
int fact(int n)
{
	int facto=1;
	for(int i=1;i<=n;i++)
	{
		facto*=i;
		
	}
	return facto;
	
	
	
}
int sumoffact(int x)
{
	int sum=0;
	for(int i=1;i<=16;i++)
	{
		
		int series= pow(x,i)/fact(i);
		if(i%2==0)
		{
			series=-series;
		}
		sum+=series;
	}
	return sum;
	
	
}
int main()
{
	int x;
	cout<<"Enter any number : ";
	cin>>x;
	int result=sumoffact(x);
	cout<<"Sum of series is : "<<result;
	
}
