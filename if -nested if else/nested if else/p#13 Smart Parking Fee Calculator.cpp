/*### *1. a*  
Calculate parking fees based on vehicle type, duration, and time of day:  
- If vehicle type is "Truck":  
  - If duration > 4 hours:  
    - If parked during "Peak Hours": Fee = $50.  
    - Else: Fee = $40.  
  - If duration = 4 hours: Fee = $30.  
- If vehicle type is "Car":  
  - If duration > 2 hours:  
    - If parked during "Peak Hours": Fee = $20.  
    - Else: Fee = $15.  
  - If duration = 2 hours: Fee = $10.  
- If vehicle type is "Motorcycle":  
  - If duration > 1 hour: Fee = $8.  
  - Else: Fee = $5.  
*/
#include<iostream>
#include<limits>
using namespace std;
int main(){
	string vehicle;
	int   duration;
	string time;
	
		cout<<"Enter the type of Vehicle :";
		cin>>vehicle;
	
		cout<<"Enter the duration of Parking :";
		cin>>duration;
	
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Enter the time of day :";
		getline(cin,time);
		
		if(vehicle=="truck")
		{
			if(duration>4)
			{
				if(time=="peak hours")
				{
					cout<<"Fee =$50";
				}
				else
				{
					cout<<"Fee =$40";//
				}
			}
			else if(duration<4)
			{
				cout<<"Fee =$30";
			}
			
		}
		else if(vehicle=="car")
		{
			if(duration>2)
			{
				if(time=="peak hours")
				{
					cout<<"Fee =$20";
				}
				else
				{
					cout<<"Fee =$15";
				}
			}
			else if(duration<2)
			{
				cout<<"Fee =$10";
			}
			
		}
		
		
		else if(vehicle=="motorcycle")
		{
			if(duration>1)
			{
				cout<<"Fee =$8";
			}
				else
				{
					cout<<"Fee =$5";
				}
		}
		
		
	
	
	
	
	
	
	
	
	
	
	
	
}


