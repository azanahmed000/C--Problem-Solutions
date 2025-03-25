/*### *10. Complex Student Attendance Evaluation*  
A university determines exam eligibility based on attendance, marks, and department rules:  
- If attendance > 85%:  
  - If marks > 70: Eligible for exam.  
  - Else:  
    - If department is "Engineering": Eligible with warning.  
    - Else: Not eligible.  
- If attendance = 85%:  
  - If marks > 90: Eligible for exam with penalty.  
  - Else: Not eligible.  
*/
#include<iostream>

using namespace std;

int main(){
	int marks;
	int attendance;
	string department;
	
		cout<<"Enter the attendance of candidate =";
		cin>>attendance;
		
	
		cout<<"Enter the marks of candidate =";
		cin>>marks;
	
		cout<<"Enter the department of candidate =";
		cin>>department;
	
		
		if(attendance>85)
		{
			if(marks>70)
			{
				cout<<"Eligible for exam. ";
			}
			else
			{
				if(department=="engineering")
				{
					cout<<"Eligible with warning.";
				}
				else
				{
					cout<<"Not eligible.";
				}
			}
			
		}
		else if(attendance==85)
		{
			if(marks>90)
			{
				cout<<"Eligible for exam with penalty.";
			}
			else
			{
				cout<<"Not eligible";
			}
		}
		else
		{
			cout<<"Not eligible for exam";
		}
	
	
	
	
	
	
	
	
	
	
}
