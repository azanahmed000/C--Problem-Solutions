/*Write a programm to convert degree-into-radian*/
#include<iostream> 
#include<iomanip.>
using namespace std;
int main()
{
int degree=0;
double radians;
const double pi=3.1415;
cout.setf(ios::fixed);
cout.precision(6);
cout<<"Degree into Radian is :\n";
while(degree<=360)
{
	radians=degree*pi/180;
	cout<<setw(6)<<degree<<setw(30)<<radians<<endl<<"\n";
	degree+=10;
	
	
}











}

