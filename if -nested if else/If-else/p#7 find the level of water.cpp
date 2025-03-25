#include<iostream>
using namespace std;

int main(){
	//Water level induction*
	int level;
	cout<<"What is the level of water in the Tank =";
	cin>>level;
	
	if(level<=500)
	{
		cout<<"Refill needed !!!!!";
		
	}
	if(level>500){
		cout<<"Water is sufficient no need to refill.........";
		
	}
	
}
