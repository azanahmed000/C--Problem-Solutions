#include<iostream>

using namespace std;

int main(){
	int t;
	cout<<"Enter your age in seconds:";
	cin>>t;
	int y=t/31449600;
	t=t%31449600;
	int m=t/2678400;
	t=t%2678400;
	int d=t/86400;
	t=t%86400;
	int mn=t/60;
	t=t%60;
	cout<<"The age in Hourse,Month,Days,Minutes and Seconds is :"<<y<<":"<<m<<":"<<d<<":"<<mn<<":"<<t;
	
}
