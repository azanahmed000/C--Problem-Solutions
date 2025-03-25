/*### *4. Loan Eligibility Decision System*  
Decide loan approval based on income, age, credit score, and employment status:  
- If income > $5000:  
  - If age > 25:  
    - If credit score > 750:  
      - If employed full-time: Loan approved for full amount.  
      - Else: Loan approved for half amount.  
    - Else: Loan denied.  
  - If age = 25: Loan requires guarantor.  
- If income = $5000:  
  - If credit score > 700: Loan approved with co-signer.  
  - Else: Loan denied.*/
  #include<iostream>
  
  using namespace std;
  
  int main(){
  	int income;
  	int age;
  	int score;
  	string status;
	  	cout<<"Tell's your income =";
	  	cin>>income;
	  	cout<<"Tell's your age =";
 	 	cin>>age;
 	 	cout<<"Tell's your credit score =";
 	 	cin>>score;
 	 	cout<<"Tell's your status as a employer i.e:Full-Time.";
  		cin>>status;
			
		if(income>5000)
		{
			if(age>25)
			{
				if(score>750)
				{
					if(status=="full-time")
					{
					    cout<<"LOAN approved for all amount";
					}
					
					else if(status=="half-time")
					{
						cout<<"LOAN approved for half amount";
					}
					else
					{
						cout<<"LOAN denied";
					}
				}
				
			}
			
		}
		else if(age<=25)
	     { 
	     	cout<<"LOAN requires guarantor ";
	        
	     	if(income<=5000)
	     	{
	     		if(score>700)
	     		{
	     				cout<<"\n\n\nLOAN approved with co-signer";
				}
	     		
	     			else
	     		{
	     				cout<<"LOAN denied";
				}
			}
		 }







  	
  		
  	
  	
  }
    


