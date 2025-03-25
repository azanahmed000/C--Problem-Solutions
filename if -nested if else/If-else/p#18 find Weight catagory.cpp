/*Write a program to determine a person's BMI category based on their BMI value:

Below 18.5: Underweight
18.5 to 24.9: Normal weight
25.0 to 29.9: Overweight
30.0 and above: Obese.
Problem 5: Day of the Week*/
#include<iostream>
using namespace std;
int main(){
	int weight;
	cout<<"Tell the weight of Person";
	cin>>weight;
	
	if(weight<=18.5){
		cout<<"Under weight";
	
	}
	else if(weight<=24.9){
		cout<<"Normal weight";
	
	}else if(weight<=30){
		cout<<"Over weight";
	
	}else  if(weight>30){
		cout<<"Obese";
	
	}
}

