#include<iostream>
#include<cstdlib>
using namespace std;
main(){
	cout<<"Wellcome to easypasa! Enter your 5-Digite Pin to Process"<<endl;
	
	int key;
	int phone;
	int num;
	int call;
	cin>>key;
	 if(key==77869){
	 	cout<<"Correct pin\n\n\n"<<endl;
	 }
	 else{
	 	cout<<"Invalid Pin!Please try again.";
	 	exit(0);
	 }/*Message Displayed:
1. Send Money
2. Mobile Load
3. Bill Payments
4. EasyLoad Advance
5. My Account
6. More Services*/


	cout<<"Press the number to open specific options"<<endl;
	cout<<"1.Send Money"<<endl;
	cout<<"2.Mobile Load "<<endl;
	cout<<"3. Bill Payment"<<endl;
	cout<<"4.EasyLoad Advance"<<endl;
	cout<<"5.My Account"<<endl;
	cout<<"6.More Services\n\n\n"<<endl;
	cin>>num;
	/*Option 1: Send Money
Message Displayed:
1. To CNIC
2. To Mobile Account
3. To Bank Account*/
if (num==0){
	cout<<"you got access";
}
else if(num==1){
	cout<<"1.To CNIC"<<endl;
	cout<<"2.To Mobile Account"<<endl;
	cout<<"3.To Bank Account\n\n\n"<<endl;
	cin>>phone;
}
	


 if (phone==2){
	cout<<"Enter the Mobile account";
	string p;
	cin>>p;
	}
	
	else if (phone==1){
	cout<<"\nEnter the CNIC ";
	string i;
	cin>>i;
	}
	
	else if (phone==3){
	cout<<"\nEnter the Bank account";
	string p;
	cin>>p;
	
	}
	
/*Option 2: Mobile Load
Message Displayed:
1. Own Number
2. Other Number
If you choose "Other Number":
Enter Receiver's Mobile Number.
Enter Amount*/
else if(num==2){
	cout<<"\n1.Own Number"<<endl;
	cout<<"\n2.Other number"<<endl;
	cin>>call;
}
	
	

 if (call==1){
	cout<<"\n\nEnter the Mobile Number";
	string p;
	cin>>p;
	}
	
	else if (call==2){
	cout<<"\nEnter the Mobile Number";
	string p;
	cin>>p;}

	
	/*Option 3: Bill Payments
Message Displayed:
1. Electricity
2. Gas
3. Water
4. Internet/Telephone
5. More Services

If you select "Electricity":
Enter Reference Number.
Enter Amount.*/
else if(num==3){
	cout<<"\n\n\n1.Electicity"<<endl;
	cout<<"2.Gas"<<endl;
	cout<<"3.Water"<<endl;
	cout<<"4.Internet/Telephone"<<endl;
	cout<<"5.More Services\n\n\n"<<endl;
	
}/*Option 5: My Account
Message Displayed:
1. Balance Inquiry
2. Mini Statement
3. Change PIN
*/
else if (num==5){
	cout<<"1.Balance Inquiry"<<endl;
	cout<<"2.Mini Statement"<<endl;
	cout<<"3.Change PIN"<<endl;
}
else if (num==4){
	cout<<"Sorry! you can't use this feature";
}
else if (num==6){
	cout<<"Our employer will contact you.";
}
else{
	cout<<"Invalid number selection";
}


}
