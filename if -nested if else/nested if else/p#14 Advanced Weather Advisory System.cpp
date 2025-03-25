/*### *2. Advanced Weather Advisory System*  
Provide travel recommendations based on temperature, humidity, and wind speed:  
- If temperature > 40°C:  
  - If humidity > 70%: Recommend "Stay Indoors."  
  - Else:  
    - If wind speed > 20 km/h: Recommend "Avoid Outdoor Activities."  
    - Else: Recommend "Carry Water and Sun Protection."  
- If temperature between 20°C and 40°C:  
  - If humidity > 60%:  
    - If wind speed > 30 km/h: Recommend "Carry a Light Jacket."  
    - Else: Recommend "Normal Outdoor Activity."  
- If temperature < 20°C:  
  - If wind speed > 15 km/h: Recommend "Wear Warm Clothes."  
  - Else: Recommend "Carry a Sweater." */
  #include<iostream>
  using namespace std;
    
int main(){
	int temp;
	int humidity;
	int speed;
	
		cout<<"Enter Today's Temperature :";
		cin>>temp;
		
		cout<<"Enter the present humiditiy of air :";
		cin>>humidity;
		
		cout<<"Enter the speed of wind :";
		cin>>speed;
		
		if(temp>40)
		{
			if(humidity>70)
			{
				cout<<"Recommend :Stay Indoors.  ";
			}
			else
			{
				if(speed>20)
				{
					cout<<" Recommend :Avoid Outdoor Activities.";
				}
				else
				{
					cout<<"Carry Water and Sun Protection.";
				}
			}
		}
		else if(temp>20 && temp<40)
		{
			if(humidity>60)
			{
				if(speed>30)
				{
					cout<<"Carry a light jacket .";
				}
				else
				{
					cout<<" Recommend :Normal Outdoor Activity.";
				}
			}
		}
		else if(temp<20)
		{
			if(speed>15)
			{
				cout<<"Recommend :Wear Warm Clothes.";
			}
			else
			{
				cout<<"Recommend :Carry a Sweater.";
			}
		}
}
