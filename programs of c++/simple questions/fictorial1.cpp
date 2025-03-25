#include<iostream>
using namespace std;
int main()
{
	
	int num;
	cout<<"Enter the number which factorial want to find";
	cin>>num;
	int f=1;
	
	for(int i=1 ; i<=num ; i++)
	
	{
			f=f*i;
			cout<<f<<"*"<<i<<endl;
	} 
	cout<<f;
}
