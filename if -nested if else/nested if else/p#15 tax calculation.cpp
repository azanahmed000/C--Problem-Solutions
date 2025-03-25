/*Input:

Age
Annual Income
Employment Status
Marital Status
Number of Dependents
Charitable Donations
Base Tax Calculation:
___________________________________

If Income > 200,000 ? Tax = 30% of Income
If 100,000 = Income = 200,000 ? Tax = 20% of Income
If 50,000 = Income < 100,000 ? Tax = 15% of Income
If Income = 50,000 ? Tax = 5% of Income
Age Adjustment:

If Age > 60 ? Reduce Tax by 10%
If Age = 25 ? Increase Tax by 5%
_________________________________________________
Employment Status:
If Self-Employed ? Add 5% of Income to Tax
If Unemployed ? Add 2,000 to Tax
__________________________________________________________
Marital Status & Dependents:
If Married ? Deduct 1,000 for each dependent (up to 3 dependents)
If Single and Age < 30 ? Add 500 to Tax
If Widowed and Income = 30,000 ? Tax = 0
__________________________________________________________________
Charitable Donations:
If Donations = 10,000 ? Deduct 20% of Donations from Tax
If Donations > 10,000 ? Deduct 2,000 from Tax
______________________________________________________________________
Luxury Tax for High-Income:
If Income > 300,000 ? Add 10,000 to Tax
__________________________________________________________________________________
Final Tax:
If Tax < 1,000 ? Set Tax to 1,000 (unless Age > 65, then no minimum)

____________________________________________________________________________________________________
Output:
Display the final Tax value___________________________________________________________________________________*/
#include<iostream>
#include<strings>
#include<limits>
using namespace std;

int main(){
	int age;
	int income;
	string employ;
	string married;
	int depent;
	int donation;
	int value1,value2,value3,value4,detu1,detu2;
	int estatus1,estatus2;
	int m1,m2,m3;
	
		cout<<"Enter your age.";
		cin>>age;
	
		cout<<"\nEnter your Annual income.";
		cin>>income;
	     
	    cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"\nEnter your present Employment Status.";
		cin>>employ;
	
	    cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"\nEnter your Marital Status.";
		cin>>married;
	
		cout<<"\nEnter the Numbers of Dependents.";
		cin>>depent;
	
		cout<<"\nEnter the figure of Donations if exists.";
		cin>>donation;
		
		
		if(income> 200000)
		{
			 value1 =income*30/100;
			 cout<<"30% TAX of income"<<value1;
			 if(age>=65)
			 {
			 	detu1=(value1)-value1*10/100;
			 	cout<<"10% decrement in  to TAX due to age";
			 	
			 	if(employ=="self employed")
			 	{
			 		estatus1=(detu1)+detu1*5/100;
			 		cout<<"Add 5% to TAX due to self-employment status";
				}
				else if(employ=="unemployed")
				{
					estatus2=detu1+2000;
					cout<<"Add 2,000 to TAX due to un-employment status";
				}
			 }
			 else if(age>=25)
			 {
			 	detu2=(value1)+value1*5/100;
			 	cout<<"5% increment in to TAX due to age";
			 		if(employ=="self employed")
			 	{
			 		estatus1=(detu1)+detu1*5/100;
			 		cout<<"Add 5% to TAX due to self-employment status";
				}
				else if(employ=="unemployed")
				{
					estatus2=detu1+2000;
					cout<<"Add 2,000 to TAX due to un-employment status";
				}
			 }
		}
		else if(income==100000 || income==200000)
		{
			 value2 =income*20/100;
			 cout<<"20% TAX of income"<<value2;
			 if(age>=65)
			 {
			 	detu1=(value2)-value2*10/100;
			 	cout<<"10% decrement in to TAX due to age";
			 		if(employ=="self employed")
			 	{
			 		estatus1=(detu1)+detu1*5/100;
			 		cout<<"Add 5% to TAX due to self-employment status";
				}
				else if(employ=="unemployed")
				{
					estatus2=detu1+2000;
					cout<<"Add 2,000 to TAX due to un-employment status";
				}
			 }
			 else if(age>=25)
			 {
			 	detu2=(value2)+value2*5/100;
			 	cout<<"5% increment in to TAX due to age";
			 		if(employ=="self employed")
			 	{
			 		estatus1=(detu1)+detu1*5/100;
			 		cout<<"Add 5% to TAX due to self-employment status";
				}
				else if(employ=="unemployed")
				{
					estatus2=detu1+2000;
					cout<<"Add 2,000 to TAX due to un-employment status";
				}
			 }
		}
		else if(income<100000)
		{
			 value3 =income*15/100;
			 cout<<"15% TAX of income"<<value1<<endl;
			 if(age>=65)
			 {
			 	detu1=(value3)-value3*10/100;
			 	cout<<"10% decrement in to TAX due to age";
			 		if(employ=="self employed")
			 	{
			 		estatus1=(detu1)+detu1*5/100;
			 		cout<<"Add 5% to TAX due to self-employment status";
				}
				else if(employ=="unemployed")
				{
					estatus2=detu1+2000;
					cout<<"Add 2,000 to TAX due to un-employment status";
				}
			 }
			 else if(age>=25)
			 {
			 	detu2=(value3)+value3*5/100;
			 	cout<<"5% increment in to TAX due to age";
			 		if(employ=="self employed")
			 	{
			 		estatus1=(detu1)+detu1*5/100;
			 		cout<<"Add 5% to TAX due to self-employment status";
				}
				else if(employ=="unemployed")
				{
					estatus2=detu1+2000;
					cout<<"Add 2,000 to TAX due to un-employment status";
				}
			 }
		}
		else if(income==50000)
		{
			 value4 =income*5/100;
			 cout<<"5% TAX of income"<<value1;
			 if(age>=65)
			 {
			 	detu1=(value4)-value4*10/100;
			 	cout<<"10% decrement in to TAX due to age";
			 	
			 		if(employ=="self employed")
			 	{
			 		estatus1=(detu1)+detu1*5/100;
			 		cout<<"Add 5% to TAX due to self-employment status";
				}
				else if(employ=="unemployed")
				{
					estatus2=detu1+2000;
					cout<<"Add 2,000 to TAX due to un-employment status";
				}
			 }
			 else if(age>=25)
			 {
			 	detu2=(value4)+value4*5/100;
			 	cout<<"5% increment in to TAX due to age";
			 	
			 		if(employ=="self employed")
			 	{
			 		estatus1=(detu1)+detu1*5/100;
			 		cout<<"Add 5% to TAX due to self-employment status";
				}
				else if(employ=="unemployed")
				{
					estatus2=detu1+2000;
					cout<<"Add 2,000 to TAX due to un-employment status";
				}
			 }
		}
		else if(married=="married" && depent==1)
		{
			m1== estatus1 || estatus2 -1000;
			if(depent==2)
			{
				m2== estatus1 || estatus2 -2000;
			}
			else if(depent==3)
			{
				m3==estatus1 || estatus2 -3000;
			}
		}
		else if(married=="single" && age<30)
		{
			
		}
		
		
		
	
	
	
	
	
	
	
}
