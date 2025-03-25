#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"Tell me your age:";
	cin>>age;
	
	if(age<=2){
		cout<<"Infant";
	} else if(age<=12){
		cout<<"Child";}
	else if(age<=19){
		cout<<"Teenager";}
	
	else if(age<=60){
		cout<<"Adult";}
		else if(age>60){
		cout<<"Senior citizen";}
		
		
}
