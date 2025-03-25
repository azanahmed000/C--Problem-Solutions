/*made function of cube and square by using return value */

#include<iostream>
using namespace std;
int num2(int n)
{
	return n*n;
}
int num3(int n)
{
	return n*n*n;
}
int main()
{
	int x;
	cout<<"Enter the any integer : ";
	cin>>x;
	int y;
	cout<<"Enter the any integer : ";
	cin>>y;
	int r= num2(x)+num3(y);
	cout<<"Result =  "<<r;
	
	
}
