#include<iostream>
using namespace std;
int main()
{
	
	int num;
	int f=1;
	cout<<"Enter the number which factorial want to find :";
	cin>>num;
	
	
	for(int i=1 ; i<=num ; ++i)
	
	{
			
			f*=i;
	} 
	cout<<f;
}
