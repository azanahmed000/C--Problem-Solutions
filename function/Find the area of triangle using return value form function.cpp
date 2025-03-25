/*Find the area of triangle using return value form function */
#include<iostream>
using namespace std;
float ar(int ba,int hi)
{
	
float a;
a=0.5*ba*hi;
return a;

	

}
int main()
{
	int x,y;
	float z;
	cout<<"Enter base of triangle : ";
	cin>>x;
	cout<<"Enter the height of triangle : ";
	cin>>y;
	z=ar(x,y);
	cout<<"Area of traingle is :  "<<z;
	
}
