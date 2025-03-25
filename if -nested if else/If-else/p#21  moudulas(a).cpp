#include<iostream>

using namespace std;
/*the ask program to enter number 1-50 base on input it amplies the following rule ,if number is divisible by three .then print "azan";if number is divisble by 5 then they print murtaza;if the number is divisible by both 3,5 then print azan murztaza..
*/
main(){
	int num;
	cout<<"Enter any integer";
	cin>>num;
	if (num%3==0&&num%5 ==0)
	{
		cout<<"Azan-Murtaza";
		if(num%3==0)
	{
		cout<<"Azan";}
	else if (num%5==0)
	{
		cout<<"Murtaza";
		
	}

	else 
	{
	cout<<"Envalid!";}
	}
	
	
}
