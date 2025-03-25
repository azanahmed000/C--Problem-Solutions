#include<iostream>
using namespace std;

int main(){
	int income;
	int age;
	char married;
	
    	cout<<"Tell your income =";
		cin>>income;
	
		cout<<"Tell me your age=";
		cin>>age;
	
		cout<<"Martial married::If Married than true T or false F ";
		cin>>married;
	
	if(income>100000)
	{
		if(age>60)
		{
			
		 if(married=='T')
		 {
		 	
			cout<<"Tax=15%";
	     }
		 
		 else
		 {
	    	cout<<"Tax=18%";
		 }
	     
	    }
		else if (age<=60)
		{
				if(married=='T')
				{
					cout<<"Tax=20%";
				}
				
			
				else
				{
				cout<<"Tax=25%";
			    }
		}
			
	}
	else if(income>=50000&&income<=100000)
	{
		if(age>50)
		{
			if(married=='T' )
			{
					cout<<"Tax=10%";
			}
			else
			{
					cout<<"Tax=12%";
			}
			
			
		}		
		
	}
	else if(income<50000)
	{
		if(age<=50)
		{
			if(married=='T' )
			
			{
				cout<<"Tax=5%";	
			}
				else
				{
					cout<<"No Tax";
				}
		}	    
		
	}
	
		
		
		
		
		
	
	
	
	
	
	}


