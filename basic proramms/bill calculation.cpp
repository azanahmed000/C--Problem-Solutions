#include<iostream>
#include<iomanip.>
using namespace std;

int main(){
	string name;
	
	cout<<"Enter name of customer:"<<endl;
	getline(cin,name);
	
	string item1;
	cout<<"Enter name of item no::1 "<<endl;
	cin>>item1;
	
	int price1;
	cout<<"Enter price of item no::1 "<<endl;
	cin>>price1;
	
	int quantity1;
	cout<<"Enter the quantity of items:"<<endl;
	cin>>quantity1;
	
	string item2;
	cout<<"Enter name of item no::2 "<<endl;
	cin>>item2;
	
	int price2;
	cout<<"Enter price of item no::2 "<<endl;
	cin>>price2;
	
	int quantity2;
	cout<<"Enter the quantity of items:"<<endl;
	cin>>quantity2;
	
    string item3;
	cout<<"Enter name of item no:3 "<<endl;
	cin>>item3;
	
	int price3;
	cout<<"Enter price of item no:3 "<<endl;
	cin>>price3;
	
	int quantity3;
	cout<<"Enter the quantity of items:"<<endl;
	cin>>quantity3;
	
	int total1=price1*quantity1; 
	int total2=price2*quantity2;
	int total3=price3*quantity3;
	
	int subtotal=total1+total2+total3;
	
	float ten_percent_of_subtotal=10*subtotal*0.010;
	
	float gt=ten_percent_of_subtotal+subtotal;
	cout<<"-------------------- || Restaurant Bill || --------------------"<<endl;
	cout<<"Customer Name :"<<name<<endl<<endl;
	
    cout<<setw(15)<<"Item"<<setw(10)<<"Price"<<setw(10)<<"Quantity"<<setw(7)<<right<<"Total"<<endl;
    
    cout<<"-------------------------------------------------------------"<<endl;
    
	cout<<item1<<setw(17)<<price1<<setw(8)<<quantity1<<setw(5)<<total1<<endl;	
	cout<<item2<<setw(17)<<price2<<setw(8)<<quantity2<<setw(5)<<total2<<endl;
	cout<<item3<<setw(17)<<price3<<setw(8)<<quantity3<<setw(6)<<total3<<endl;
	
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Subtotal"<<setw(20)<<subtotal<<endl;
	cout<<"TAX(10%)"<<setw(20)<<ten_percent_of_subtotal<<endl;
	cout<<"Grand Total"<<setw(22)<<gt<<endl;
	
	cout<<"------------------------- *Thanks For Coming* -------------------" ;
	
	
		
}
