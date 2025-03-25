#include<iostream>
using namespace std;
int main(){
	int choice,months;
	double charges;
	
	cout<<"Health Club membership Menu\n\n\n";
	cout<<"1.Standard Adult Membership\n";
	cout<<"2.Child Membership\n";
	cout<<"3.Senior Citizen Membership\n";
	cout<<"4.Quit your Membership\n\n\n";
	cout<<"Enter your Choice  ";
	cin>>choice;
	
	if(choice>=1 && choice<=4)
	{cout<<"For how many months ?";
	cin>>months;
	switch(choice)
	{
		case 1: charges=months*50;
		cout<<"RS ="<<charges<<endl;
		break;
		
		case 2: charges=months*30;
		cout<<"RS ="<<charges<<endl;
		break;
		
		case 3: charges=months*20;
		cout<<"RS ="<<charges<<endl;
		break;
		
		default:
		cout<<"Invalid option";	
	}
     
	}
		
	
	
}
