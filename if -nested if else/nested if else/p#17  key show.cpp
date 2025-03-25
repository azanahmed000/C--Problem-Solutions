#include<iostream>
using namespace std;
int main(){
	char key;
	
		cout<<"Press any Key    ";
		cin>>key;
	
		
		if(key>='a' && key<='z')
		{
			cout<<"User enter a small alpahabate   ";
		}
		else if(key>='A' && key<='Z')
		{
			cout<<"User enter a big alpahabate   ";
		}
		else if(key>='0' && key<='9')
		{
			cout<<"User enter a number        ";
		}
		else
		{
			cout<<"User enter a special  character";
		}
	
}
