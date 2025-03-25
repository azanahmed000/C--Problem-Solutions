/*write a programm to display sum of the series
1+1/2+1/4.....1/100*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float c,r;
	c=1.0;
	r=2.0;
	cout<<"Result is :";
	
	while(c<=100)
	{
		r=r+1.0/c;
		c+=2;	
	}
	cout<<r;
	
}
