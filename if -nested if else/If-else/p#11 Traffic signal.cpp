#include<iostream>
using namespace std;

int main(){
	string colour;
	cout<<"What is colour of the signal ?";
	cin>>colour;

	
	if (colour==red)
	{
		cout<<"Stop!";
	}
	else if(colour==green){
	
	cout<<"GO";
}
    else if(colour==yellow)
    {
    	cout<<"Start the engine";
	}
}
