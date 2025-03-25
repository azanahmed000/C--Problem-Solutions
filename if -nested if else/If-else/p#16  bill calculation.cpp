#include<iostream>

using namespace std;
int main(){
	double p,t,d;
	cout<<"How much power is use by applience($)"<<endl;
	cin>>p;
	cout<<"How much time your appliece did work($)"<<endl;
	cin>>t;
	cout<<"How much day's its work($)"<<endl;
	cin>>d;
	
	double b =p*t*d/1000;
	cout<<"What is price of one unit($)"<<endl;                             
	double bi;
	//  Units = 100: $1/unit
//101 to 200 units: $1.5/unit
//201 to 300 units: $2/unit
//Above 300 units: $3/unit.

	
	cin>>bi;
	
	double bill=b*bi;
	cout<<"Total net cost of your bill is($)"<<bill;
	double unit= bill-35/bi ; // here 35 is tax i.e:GST
	 if(unit=100){
	 	cout<<"1$ additional charges";
	 }
	else if(unit>=200){
	 	cout<<"1.5$ additional charges";
	 }
	else if(unit>=300){
	 	cout<<"2$ additional charges";
	 }
	else if(unit>300){
	 	cout<<"3$ additional charges";
	 }
	
}
