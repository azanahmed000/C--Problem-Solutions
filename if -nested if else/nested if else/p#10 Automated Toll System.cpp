/*### *8. Automated Toll System*  
Calculate toll charges based on vehicle type, time of day, and route:  
- If vehicle type is "Truck":  
  - If time is "Peak Hours":  
    - If route is "Highway": Toll = $20.  
    - Else: Toll = $15.  
  - If time is "Off-Peak Hours": Toll = $10.  
- If vehicle type is "Car":  
  - If time is "Peak Hours": Toll = $5.  
  - Else: Toll = $3. */
   #include<iostream>
   #include<limits>
using namespace std;

int main(){
string vehicle;
string day;
string route;

	cout<<"Enter the type of vehicle :";
	cin>>vehicle;
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout<<"\nEnter the time of day :";
	getline(cin, day);

	cout<<"\nEnter the route which vehicle followed :";
	cin>>route;

		if(vehicle=="truck")
		{
			if(day=="peak hours")
			{
				if(route=="highway")
				{
					cout<<"TOLL = $20";
				}
				else
				{
					cout<<"TOLL = $15";
				}
			}
			else if(day=="off peak hours")
			{
			cout<<"TOLL = $10";
			}
		}
		
		
		else if(vehicle=="car")
		{
			if(day=="peak hours")
			{
	        	cout<<"TOLL = $5";
	    	}
	    	else
	    	{
	    		cout<<"TOLL = $3";
			}
		}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

}
