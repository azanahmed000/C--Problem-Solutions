#include<iostream>

using namespace std;
int main(){
	double p,t,d;
	cout<<"How much power is use by applience"<<endl;
	cin>>p;
	cout<<"How much time your appliece did work"<<endl;
	cin>>t;
	cout<<"How much day's its work"<<endl;
	cin>>d;
	
	double b =p*t*d/1000;
	cout<<"What is price of one unit"<<endl;
	double bi;
	
	cin>>bi;
	
	double bill=b*bi;
	cout<<"Total net cost of your bill is"<<bill;
	return 0; 
}
