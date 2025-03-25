#include<iostream>
using namespace std;

int main(){
	//Grade calculation
	int grade;
	cout<<"Enter your percentage ?";
	cin>>grade;

	
	if (grade>=85)
	{
		cout<<"Congatulates your have 'A'grade";
	}
	else if(grade>=75){
	
	cout<<"Good you got 'B 'grade";
	
}
    else if(grade>=65){
    cout<<"nice you got 'C 'grade";
	}
    else if(grade<=55){
    cout<<" 'C 'grade";
	}
	
	
}
