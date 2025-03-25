/*
### *10. Intelligent Toll Fee Categorization*  
Calculate toll charges based on vehicle weight, time, and route:  
- If weight > 5000 kg:  
  - If time is "Daytime":  
    - If route is "Urban": Fee = $100.  
    - Else: Fee = $80.  
  - If time is "Nighttime": Fee = $50.  
- If weight = 5000 kg:  
  - If time is "Daytime":  
    - If route is "Urban": Fee = $40.  
    - Else: Fee = $30.  
  - If time is "Nighttime": Fee = $20.*/
  
  #include<iostream>
  using namespace std;
  int main(){
  	int weight;
  	string time;
  	string route;
  	
  		cout<<"Enter the weight of vehicle  ";
  		cin>>weight;
  	
  		cout<<"Enter the time  ";
  		cin>>time;
  	
  		cout<<"Enter the route of Vehicle  ";
  		cin>>route;
  	
  	
  		if (weight>5000)
  		{
  			if(time=="daytime")
  			{
  				if(route=="urban")
  				{
  					cout<<"Fee =$100";
				}
				else
			{
				cout<<"Fee =$80";
			}
			}
			
			
			else if(time=="nighttime")
			{
				cout<<"Fee =$50";
			}
		}
		else if(weight<=5000)
		{
			if(time=="daytime")
			{
				if(route=="urban")
				{
					cout<<"Fee =$40";
				}
				else
				{
					cout<<"Fee =$30";
				}
			}
			else if(time=="nighttime")
			{
				cout<<"Fee =$20";
			}
		}
  		
  	
  	
  }
