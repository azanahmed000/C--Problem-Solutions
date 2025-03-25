/*### Algorithm for Employee Management System with Additional Details  

1. **Start**  
2. Display a welcome message: `"Welcome to the Employee Management System"`.  
3. Display the department options:  
   - `1. HR`  
   - `2. IT`  
   - `3. Sales`  
4. Prompt the user to enter a choice for the department.  
5. Read the user's input into the variable `departmentChoice`.  
6. Use a `switch` statement for the `departmentChoice`:  
   - **Case 1 (HR Department):**  
     1. Display HR roles:  
        - `1. Recruiter`  
        - `2. Payroll Manager`  
     2. Prompt the user to enter a choice for the role.  
     3. Read the user's input into the variable `roleChoice`.  
     4. Use a nested `switch` for `roleChoice`:  
        - **Case 1 (Recruiter):**  
          - Display role details:  
            - `"Role: Recruiter"`  
            - `"Responsibilities: Manage recruitment processes."`  
            - `"Salary: 50,000 PKR/month."`  
            - `"Working Hours: 9 AM - 5 PM, Monday to Friday."`  
        - **Case 2 (Payroll Manager):**  
          - Display role details:  
            - `"Role: Payroll Manager"`  
            - `"Responsibilities: Handle payroll operations."`  
            - `"Salary: 60,000 PKR/month."`  
            - `"Working Hours: 9 AM - 5 PM, Monday to Friday."`  
        - **Default:**  
          - Display `"Invalid role selected in HR."`  
     5. End inner `switch`.  
   - **Case 2 (IT Department):**  
     1. Display IT roles:  
        - `1. Developer`  
        - `2. System Administrator`  
     2. Prompt the user to enter a choice for the role.  
     3. Read the user's input into the variable `roleChoice`.  
     4. Use a nested `switch` for `roleChoice`:  
        - **Case 1 (Developer):**  
          - Display role details:  
            - `"Role: Developer"`  
            - `"Responsibilities: Develop and maintain applications."`  
            - `"Salary: 80,000 PKR/month."`  
            - `"Working Hours: 10 AM - 6 PM, Monday to Saturday."`  
        - **Case 2 (System Administrator):**  
          - Display role details:  
            - `"Role: System Administrator"`  
            - `"Responsibilities: Manage IT infrastructure."`  
            - `"Salary: 70,000 PKR/month."`  
            - `"Working Hours: 9 AM - 6 PM, Monday to Friday."`  
        - **Default:**  
          - Display `"Invalid role selected in IT."`  
     5. End inner `switch`.  
   - **Case 3 (Sales Department):**  
     1. Display Sales roles:  
        - `1. Sales Executive`  
        - `2. Account Manager`  
     2. Prompt the user to enter a choice for the role.  
     3. Read the user's input into the variable `roleChoice`.  
     4. Use a nested `switch` for `roleChoice`:  
        - **Case 1 (Sales Executive):**  
          - Display role details:  
            - `"Role: Sales Executive"`  
            - `"Responsibilities: Achieve sales targets and manage client interactions."`  
            - `"Salary: 40,000 PKR/month + Commission."`  
            - `"Working Hours: 10 AM - 7 PM, Monday to Saturday."`  
        - **Case 2 (Account Manager):**  
          - Display role details:  
            - `"Role: Account Manager"`  
            - `"Responsibilities: Manage key client accounts and ensure client satisfaction."`  
            - `"Salary: 60,000 PKR/month."`  
            - `"Working Hours: 10 AM - 6 PM, Monday to Friday."`  
        - **Default:**  
          - Display `"Invalid role selected in Sales."`  
     5. End inner `switch`.  
   - **Default:**  
     - Display `"Invalid department selected."`  
7. End outer `switch`.  
8. **End**  */
#include<iostream>
using namespace std;

int main(){
	int role1,role2,role3;
	cout<<"Wellcome to the  Employee Managment System.\n\n\n\n";
	cout<<"Our Departments are:\n";
	cout<<"1. HR\n";
	cout<<"2. IT\n";
	cout<<"3. Sales\n\n";
	cout<<"Select a Department(1-3)  "<<endl;
	int op;
	cin>>op;
	switch(op)
	{
		case 1:
		cout<<"Roles in HR are :\n";
		cout<<"1. Recruiter\n";
		cout<<"2. Payroll Manager\n\n";
		cout<<"Select any option(1-2)=";
		cin>>role1;
		
		switch(role1)
		{case 1:
			cout<<"Role: Recruiter \n";
			cout<<"- Responsibilities: Manage recruitment processes.\n";
			cout<<"-Salary: 50,000 PKR/month. \n";
			cout<<"- Working Hours: 9 AM - 5 PM, Monday to Friday."<<endl;
		break;	
		case 2:
			cout<<"Role: Payroll Manager\n";  
            cout<<"- Responsibilities: Handle payroll operations.\n";  
            cout<<"- Salary: 60,000 PKR/month.\n";  
            cout<<"- Working Hours: 9 AM - 5 PM, Monday to Friday.\n"<<endl;
            break;
            
            default:
            cout<<"Invalid Role in HR";
		}break;
			case 2:
		cout<<"Roles in IT Departments\n"; 
        cout<<"1. Developer \n"; 
        cout<<"2. System Administrator\n\n";
        cout<<"Select any option(1-2)=";
        cin>>role2;
        
        switch(role2)
        {
        	case 1:
        		cout<<"Role: Developer\n";  
            cout<<"- Responsibilities: Develop and maintain applications.\n";  
            cout<<"- Salary: 80,000 PKR/month.\n";  
            cout<<"- Working Hours: 10 AM - 6 PM, Monday to Saturday.\n"<<endl;
            break;
            case 2:
            	cout<<"Role: System Administrator\n";  
            cout<<"- Responsibilities: Manage IT infrastructure.\n";
            cout<<"- Salary: 70,000 PKR/month.\n";  
            cout<<"- Working Hours: 9 AM - 6 PM, Monday to Friday.\n"<<endl;
            break;
            default:
            cout<<"Invalid role in IT";
		}break;
		case 3:
			cout<<"Role: Sales Department\n";
			cout<<"1. Sales Executive\n"; 
          	cout<<"2. Account Manager \n\n";			
		cout<<"Select any option(1-2)=";
		cin>>role3;
		
		switch(role3)
		{case 1:
			cout<<"Role: Sales Executive\n";
            cout<<"- Responsibilities: Achieve sales targets and manage client interactions.\n";  
            cout<<"- Salary: 40,000 PKR/month + Commission.\n";  
            cout<<"- Working Hours: 10 AM - 7 PM, Monday to Saturday.\n"<<endl;
            break;
        case 2:
        	cout<<"Role: Account Manager\n";  
            cout<<"Responsibilities: Manage key client accounts and ensure client satisfaction.\n";  
            cout<<"Salary: 60,000 PKR/month.\n";  
            cout<<"Working Hours: 10 AM - 6 PM, Monday to Friday.\n"<<endl;
            break;
            default:
            cout<<"Invalid role for Sales department";
            break;
		}
		break;
		default:
		cout<<"Invalid Department selected";
	}
	
}

