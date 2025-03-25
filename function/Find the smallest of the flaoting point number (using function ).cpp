/*Find the smallest of the flaoting point number (using function )*/
#include<iostream>
using namespace std;
float small(float a,float b,float c)
{
	if(a<=b &&a<=c)
	{
		return a;
	}
	 else if(b<=a && b<=c)
	{
		return b;
	}
	else 
	{
		return c;
	}
}
int main()
{
	float a,b,c;
	cout<<"Enter  the floating numbers :\n\n\n ";
	cin>>a>>b>>c;
	
	cout<<"The smallest number is :  \n\n ";
	float smallest=small(a,b,c);
	cout<<smallest;
	
}
