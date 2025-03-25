#include<iostream>
using namespace std;

int main(){
	//Elevator weight Check*
	int weight_in_kg;
	cout<<"Tell the weight of passangers=";
	cin>>weight_in_kg;
	
	if(weight_in_kg>=1000)
	{
		cout<<"Overloaded!Plzz decrease the weigt.....";
		
	}
	if(weight_in_kg<1000)
	{
		cout<<"Elevator is ready to move take your postion....... ";
	}
}
