/* made a function to find  maximum and minimum numbers */
#include<iostream>
using namespace std;
void max(int x,int y);
int main()
{
	int a,b;
	cout<<"Enter two numbers :\n";
	cin>>a>>b;
	max(a,b);
	
}
void max(int a,int b)
{
	if(a>b)
	{
		cout<<"Maximun number is : "<<a;
		cout<<"    Minimum number  is : "<<b;
	}
	else
	{
		cout<<"Maximun number is : "<<b;
		cout<<"    Minimum number  is : "<<a;
	}

	
	
	
	
}
