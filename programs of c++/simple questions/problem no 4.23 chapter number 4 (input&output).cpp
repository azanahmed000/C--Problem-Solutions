#include<iostream>
using namespace std;

int main(){
	long int n,a,b,c,d;
	cout<<"Enter any five digit number :";
	cin>>n;
	a=n/10000;
	n=n%10000;
	b=n/1000;
	n=n%1000;
	c=n/100;
	n=n%100;
	d=n/10;
	n=n%10;
	cout<<"Number in reverse order is equall to :=:"<<n<<d<<c<<b<<a;
}
