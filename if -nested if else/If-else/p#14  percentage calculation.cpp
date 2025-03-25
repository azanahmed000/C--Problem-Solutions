#include<iostream>
using namespace std;

int main(){
	int maths,chem,phy,eng;
	cout<<"Enter your subjects marks";
	cout<<"Enter your maths number";
	cin>>maths;
	cout<<"Enter  your chemistry marks";
	cin>>chem;
	cout<<"Enter your  physics marks";
	cin>>phy;
    cout<<"Enter your  english marks";
    cin>>eng;
    double percentage=maths+chem+phy+eng*370/100;
    if(percentage>90)
    {
	cout<<"Grade:A";}
    else if(percentage>80){
    	cout<<"Grade:B";
	}
	else if(percentage>70){
		cout<<"Grade:C";
	}
	else if(percentage>60){
		cout<<"Grade:D";
	}
	else{
	
	cout<<"Fail";}
	
}
