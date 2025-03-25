#include<iostream>

using namespace std;

int main(){
	string flaga="Pakistan";
	string flagb="China";
	string flagc="Russia";
	string flagd="Turkey";
	
	bool country1=false;
	bool country2=false;
	bool country3=false;
	bool country4= true;
	
	
    if(country1){
	cout<<"\nThe country National song will be played is :"<<flaga;
		}
		
	if(country2){
	cout<<"\nThe country National song will be played is :"<<flagb;
		}
	if(country3)
	{
		cout<<"\nThe country National song will be played is :"<<flagc;
		}	
	if(country4)
	{
		cout<<"\nThe country National song will be played is :"<<flagd;
		
	}
	
	if (!country1 && !country2 && !country3 && !country4)
	{
		cout<<"\nSorry!no country national song will be played.";
	}
}
