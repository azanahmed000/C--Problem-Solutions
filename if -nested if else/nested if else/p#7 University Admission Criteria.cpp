/*### *5. University Admission Criteria*  
A university evaluates students for scholarships based on GPA, extracurriculars, and financial background:  
- If GPA > 3.9:  
  - If extracurricular score > 8/10:  
    - If family income < $30,000: Full scholarship.  
    - Else: 75% scholarship.  
  - Else:  
    - If family income < $30,000: Half scholarship.  
    - Else: No scholarship.  
- If GPA between 3.5 and 3.9:  
  - If extracurricular score > 7/10: 50% scholarship.  
  - Else: No scholarship.*/
  #include<iostream>
  
  using namespace std;
  
  int main(){
  		double gpa;
	  	int score;
	  	int income;
	  	cout<<"Mention your current GPA :";
 	 	cin>>gpa;
  		cout<<"\nMention your extracurricular score (?/10) :";
  		cin>>score;
  		cout<<"\nMention family income :";
  		cin>>income;
  	
  		if(gpa>3.9)
 
 		{
 		   if(score>=8)
 		   {
 		   	 if(income<30000)
 		   	  {
 		   	  	cout<<"Full Scolarship.";
			  }
			  else 
			  cout<<"75% of Scolarship will be granted only.";
		   }
		   else
		   {
		   		if(income<30000)
		   		{
		   		cout<<"Half Scolarship will be granted";
		 		}
		  		else
		  		{
		  			cout<<"NO scolarship will be granted";
				}
		   
 		   }	
		}
		else if(gpa>3.5 && gpa<3.9)
		{
			if(score>7)
			{
				if(income<30000)
				{
					cout<<"50% of Scolarship will be granted";
				}
			}
			else
			{
				cout<<"No Scolarship will be granted";
			}
			
		}
		else
		{
			cout<<"No Scolarship will be granted";
		}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  	
  }

