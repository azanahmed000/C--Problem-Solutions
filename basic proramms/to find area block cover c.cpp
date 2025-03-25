#include<iostream>
using namespace std;
int main(){
	double lw=15;
	double ww=12;
	
	double aw=lw*ww;
	
	cout<<"Area of total wall is"<<aw<<endl;
	double lwi=5;
	double hwi=8;
	double awi =lwi*hwi;
	cout<<"Area of window is"<<awi<<endl;
	double ld=3;
	double hd=7;
	double ad =ld*hd;
	
	cout<<"Area of door is"<<ad<<endl;
	double abc =aw-awi-ad;
	cout<<"Area which blocks cover is"<<abc<<endl;
	double lb=18;
	double wb=18;
	double ab =lb*wb;
	
	cout<<"Area of blocks is"<<ab<<endl;
	double block = (abc)/ab;
	cout<<"the"<<block;
	return 0;
	
	
}

