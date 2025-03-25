/*use function to swap values with using pass by refferece */
#include<iostream>
using namespace std;
int swap(int& x,int& y)
{
	int a;
	a=x;
	x=y;
	y=a;
	
}
int main()
{
	int a,b;
	cout<<"Enter any two numbers : \n";
	cin>>a>>b;
	swap(a,b);
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}
