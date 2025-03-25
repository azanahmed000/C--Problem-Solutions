/*Enter a program to find multiple of a number by using returning value from the function */
#include<iostream>
using namespace std;
int mul(int a,int b)
{
	if(a%b==0)
	{
		return 1;
		
	}
	else
	{
		return 0;
	}
	
}

int main()
{
	int x,y,z;
	for(int i=1;i<=5;i++)
{
	cout<<"\nEnter any pair of numbers : \n";
	cin>>x>>y;
	z=mul(x,y);
	if(z==1)
{
	cout<<x<<" is multiple of "<<y;
}
else
{
	cout<<x<<" is  not multiple of "<<y;
}
}


}

