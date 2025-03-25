/*Problem 7: Tax Bracket Calculation
Write a program to calculate the income tax based on annual income:

Income = $50,000: 5% tax
$50,001 to $100,000: 10% tax
$100,001 to $200,000: 15% tax
Above $200,000: 20% tax*/
#include<iostream>

using namespace std;

int main(){
	int income;
	char s='+';
	cout<<"Tell your annual income = ";
	cin>>income;
	 if (income==50000)
	{cout<<"5% Tax ="<<(0.05*income)+income;                             //%age =ob/total*100
}
	 else if (income>=100000)
	 {
	 cout<<"10% Tax =" ;}
	  else if (income>=200000)
	 {
	 cout<<"15% Tax =";}
	  else 
	 {
	 cout<<"20% Tax =";}
}
