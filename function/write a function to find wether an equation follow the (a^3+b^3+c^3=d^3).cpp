/*write a function to find wether an equation follow the (a^3+b^3+c^3=d^3)   */
#include<iostream>
using namespace std;
int eq (int x ,int y,int z,int a)
{
	if(x*x*x+y*y*y+z*z*z==a*a*a)
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
	int a,b,c,d;
	cout<<"Enter the first  numbers accordind to this equation :(a^3+b^3+c^3=d^3) \n\n";
	cin>>a>>b>>c;
	cout<<"Enter the number  want to find : ";
	cin>>d;
	int l=eq(a,b,c,d);
	if(l==1)
	{
		cout<<"Given equation a^3+b^3+c^3=d^3   follow by these number : ";
	}
	else
	{
		cout<<"Given equation a^3+b^3+c^3=d^3 not  follow by these number : ";
	}
}
