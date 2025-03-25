#include<iostream>
using namespace std;
int main(){
	
	int t;
	cout<<"Enter Number for table:";
	cin>>t;
	//int res=0
	
	for(int i= 1 ; i<=15 ; i++)
	{
		cout<<t<<'*'<<i<<'='<<t*i<<endl;
	}
}
