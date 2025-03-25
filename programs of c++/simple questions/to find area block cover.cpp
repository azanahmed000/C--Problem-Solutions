#include<iostream>
using namespace std;
int main(){
	float lw=15.0;
	float ww=12.0;
	
	float aw=lw*ww;
	
	cout<<"Area of total wall is"<<aw<<endl;
    float lwi=5.0;
	float hwi=8.0;
	float awi =lwi*hwi;
	cout<<"Area of window is"<<awi<<endl;
	float ld=3.0;
	float hd=7.0;
	float ad =ld*hd;
	
	cout<<"Area of door is"<<ad<<endl;
	float abc =aw-awi-ad;
	cout<<"Area which blocks cover is"<<abc<<endl;
	float lb=18.0;
	float wb=6.0;
	float ab =lb*wb;
	
	cout<<"Area of blocks is"<<ab<<endl;
	float ba =abc/ab;
	cout<<"the"<<ba;
	//return 0;
	
	
}

