#include<iostream>
using namespace std;
int main(){
	double p,r,t,i;
	cout<<"Enter the principle amount,rate,time :";
	cin>>p>>r>>t;
	i=(p*r*t)/100;
	cout<<"\nprinciple amount =Rs."<<p;
	cout<<"\n Rate ="<<r<<"%";
	cout<<"\n Time ="<<t<<"yers";
	cout<<"\nsimple intrest Amount =Rs:"<<i;
	
}
