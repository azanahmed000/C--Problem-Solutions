/*### *9. Event Ticket Price*  
Determine ticket price based on event type, seating category, and booking time:  
- If event type is "Concert":  
  - If seating category is "VIP":  
    - If booked early: Price = $200.  
    - Else: Price = $250.  
  - If seating category is "Standard": Price = $100.  
- If event type is "Sports":  
  - If seating category is "VIP": Price = $150.  
  - If seating category is "Standard":  
    - If booked early: Price = $50.  
    - Else: Price = $75.*/
	#include<iostream>
	#include<limits>
	using namespace std;
	int main(){
			string event;
			string category;
			string time;
			
			cout<<"Enter the event :";
			cin>>event;
			
			cout<<"\n\nEnter the seating category :";
			cin>>category;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			cout<<"\n\n\nEnter the booking detail :";
			getline(cin,time);
			
			
			if(event=="concert")
			{
				if(category=="VIP")
				{
					if(time=="booked early")
					{
						cout<<"Price = $200";
					}
					else
					{
						cout<<"Price = $250";
					}
				}
				else if(category=="standard")
				{
					cout<<" Price = $100.";
				}
				
			}
			else if(event=="sports")
			{
				if(category=="VIP")
				{
					cout<<"Price = $150.";
				}
				else if(category=="standard")
				{
					if(time=="booked early")
					{
						cout<<" Price = $50.";
					}
					else
					{
						cout<<" Price = $75.";
					}
				}
			}
		
		
		
		
		
		
	}  

