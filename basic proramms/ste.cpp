#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	float a=23;
	float b=31.90045;
	float c=41.555555552;
	cout<<setw(4)<<setprecision(3)<<fixed<<a<<endl;
	cout<<fixed<<b<<endl; 
	cout<<setw(4)<<setprecision(3)<<c<<endl;                             //"\n"
}

