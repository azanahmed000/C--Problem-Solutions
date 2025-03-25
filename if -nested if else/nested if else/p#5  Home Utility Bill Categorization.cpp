/*### *3. Home Utility Bill Categorization*  
Calculate electricity bill based on usage, type of house, and peak hours:  
- If usage > 1000 kWh:  
  - If house type is "Apartment":  
    - If peak hours usage > 50% of total usage: Bill = $0.25 per kWh.  
    - Else: Bill = $0.20 per kWh.  
  - If house type is "Independent":  
    - If peak hours usage > 60%: Bill = $0.30 per kWh.  
    - Else: Bill = $0.25 per kWh.  
- If usage = 1000 kWh:  
  - If house type is "Apartment": Bill = $0.15 per kWh.  
  - Else: Bill = $0.18 per kWh.  */
  #include<iostream>
  using namespace std;
  
  int main(){
  	
  		int tusage;
  		string house;
  		int pusage;
  		cout<<"Tell us your Total usage(kWh) :";
  		cin>>tusage;
  		cout<<"Tell us your type of house :";
  		cin>>house;
  		cout<<"Tell us  the electricity consium in peak hours of Total :";
  		cin>>pusage;
  	
  		if(tusage>1000)
  		{
  			if(house=="appartment")
  			{
  				if(pusage>50)
  				{
				 cout<<"Bill =$0.25 per kWh.";
				}
  				
  				else
  				cout<<"Bill =$0.20 per kWh.";
  			}
  			
  			else if(house=="independent")
  			{
  				if(pusage>60)
  				{
  					cout<<"Bill =$0.30 per kWh.";
				}
				   else
				   {
				   cout<<"Bill =$0.25 per kWh";
				   }
				
			}
  			
  		}
  		
  		else if(tusage=1000)
  		{
  			if(house=="appartment")
  			{
			 cout<<"Bill =$0.15 per kWh.";
			}
  				
  			   else
  			   {
  			   cout<<"Bill =$0.18 per kWh.";
			   }
  		}
  			
  			
  			
  			
		}
  		
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  

