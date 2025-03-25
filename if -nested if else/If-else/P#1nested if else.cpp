#include<iostream>
using namespace std;

int main()
{
	
		
	int num1,num2,num3,num4;
	cout<<"Enter any four numbers"<<endl;
	cout<<"\n\nEnter First number =";
	cin>>num1;
	cout<<"\n\nEnter Second number =";
	cin>>num2;
	cout<<"\n\nEnter Third number =";
	cin>>num3;
	cout<<"\n\nEnter Four number =";
	cin>>num4;
	if(num1>num2)
	{
		if(num1>num3)
		{
			if(num1>num4)
			{
				cout<<num1<<"is gratest";
			}
		}
	}
	else if(num2>num1)
	{
		if(num2>num3)
		{
			if(num2>num4)
			{
				cout<<num2<<" is Greatest";
			}
	
			
		}
		
	}
	else if(num3>num1)
	{
		if(num3>num2)
		{
			if(num3>num4)
			{
				cout<<num3<<" is Greatest";
			}
	
			
		}
		
	}
	else
	{
		cout<<num4<<" is Greatest";
	}
	













}
