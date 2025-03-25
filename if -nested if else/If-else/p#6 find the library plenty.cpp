#include<iostream>
using namespace std;

int main(){
    //library book return palenty*
    int days;
    cout<<"Tell the number of days book is in use:";
    cin>>days;
    int overdyesdays=days-7;
    int plenty=overdyesdays*2;
    if(days<=7)
    {
    	cout<<"There is no plenty to be paid";
    	
	}
	 if(days>=7)
    {
    	cout<<"The plenty have to be paid  ="<<plenty<<"$";
    	
	}
	
}


