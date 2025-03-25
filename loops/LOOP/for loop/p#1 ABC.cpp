#include<iostream>
#include<iomanip.>
using namespace std;

main(){
	char alphabate;
	cout<<"Ener the Alphabets like A for Captal A and 'a' for Small a";
	cin>>alphabate;
	
	
	
	if(alphabate=='A')
	{
			for(alphabate='A' ; alphabate<='Z' ; alphabate++)
		{
			cout<<setw(2)<<alphabate;
		}
	}
	else
	{
			for(alphabate='a' ; alphabate<='z' ; alphabate++)
		{
			cout<<setw(10)<<alphabate;
		}
	}

	
	
	
}
