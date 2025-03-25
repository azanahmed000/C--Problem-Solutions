/*### *7. Store Membership Discount Evaluation*  
A store provides discounts based on membership type, spending, 
and shopping day:  
- If membership is "Gold":  
  - If spending > $1000:  
    - If shopping on "Weekend": Discount = 30%.  
    - Else: Discount = 25%.  
  - If spending = $1000: Discount = 20%.  
- If membership is "Silver":  
  - If spending > $500:  
    - If shopping on "Weekend": Discount = 15%.  
    - Else: Discount = 10%.  
  - If spending = $500: Discount = 5%. */


#include<iostream>

using namespace std;
int main(){
	string card;
	int spending;
	string shopping;
	
		cout<<"Mention your membership type :";
		cin>>card;
		cout<<"Mention your spendings in DOlLORS($) :";
		cin>>spending;
		cout<<"Mention your peak shopping day :";
		cin>>shopping;
		
		if(card=="gold")
		{
			if(spending>1000)
			{
				if(shopping=="weekend")
				{
					cout<<" Discount = 30%";
				}
				else
				{
				  cout<<"Discount = 20%";	
				}
			}
			else if(spending=1000)
			{
				cout<<" Discount = 20%";
			}
			
			
		}
		else if(card=="silver")
		{
			if(spending>500)
			{
				if(shopping=="weekend")
				{
					cout<<" Discount = 15%";
				}
				else
				{
				  cout<<"Discount = 10%";	
				}
			}
			else if(spending=500)
			{
			cout<<"Discount =5%";
			}
		}
	
	
	
	
	
	
	
	
}


