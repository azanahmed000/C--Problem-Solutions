#include<iostream>
using namespace std;

int main(){
	//to check the day & night in hours*
	int time;
	cout<<"Tell the present time (in hours,0-23)=";
	cin>>time;
	
	if(time>=6 && time<=18)
	{
		cout<<"It's day time have a  nice day.....";
		
	}
	else
	{
		cout<<"it's night time ....... ";
	}
}
