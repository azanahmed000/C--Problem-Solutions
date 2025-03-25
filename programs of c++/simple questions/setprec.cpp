#include<iostream>
#include<iomanip.>

using namespace std;

int main(){
	double n1=123.456,n2=29.64;
	double r=n1/n2;
	cout<<r<<endl;
	cout<<fixed<<r<<endl;
	cout<<setprecision(4)<<r<<endl;
	cout<<setprecision(3)<<r<<endl;
	cout<<setprecision(2)<<r<<endl;
	cout<<setprecision(1)<<r<<endl;
	
}

