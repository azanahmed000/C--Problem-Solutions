#include<iostream>
using namespace std;

int main(){
	int maths1=92;
	int chemistry1=81;
	int physics1=84;
	int pakistan_studies1=47;
	int english1=91;
	
	int maths2=90;
	int chemistry2=76;
	int physics2=80;
	int pakistan_studies2=40;
	int english2=88;
	
	cout<<"averge of  maths is :"<<maths1+maths2/2<<endl;
	cout<<"averge of chemistry is:"<<chemistry1+chemistry2<<endl;
	cout<<"averge of physics is :"<<physics1+physics2/2<<endl;
	cout<<"averge of pakistan studies is :"<<pakistan_studies1+pakistan_studies2/2<<endl;
	cout<<"averge of english is :"<<english1+english2/2<<endl;
	
	float sum=maths1+maths2+chemistry1+chemistry2+physics1+physics2+pakistan_studies1+pakistan_studies2+english1+english2;
	
	cout<<"The total percentage is :"<<sum/900*100<<endl;
	
	
}
