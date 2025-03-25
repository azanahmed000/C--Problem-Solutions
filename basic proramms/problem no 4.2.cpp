#include<iostream>

using namespace std;

int main(){
	int a,b,temp;
	
	cout<<"Enter first No:";
	cin>>a;
	cout<<"\nEnter the second number:";
	cin>>b;
	cout<<"Number before swiping is :"<<"\nfirst num is:"<<a<<"\nsecond num is:"<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n Number after swapping are"<<"\nfirst number now:"<<a<<"\nsecond number now:"<<b;
	cout<<"\n\n\n\n temp is:"<<temp;
}
