#include<iostream>
using namespace std;

main()
{
	int leepyear;
	cout<<"Enter Year:";
	cin>>leepyear;
	
	
	
	if(leepyear%4==0&&leepyear%100!=0)
	{
	 cout<<leepyear<<" is Leep year";	
	}
	else if(leepyear%400==0)
	{
	cout<<leepyear<<" is Leep year";
	}
	else
	{
		cout<<leepyear<<" is no a Leap year";
	}
}
