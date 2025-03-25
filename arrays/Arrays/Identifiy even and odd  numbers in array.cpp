/*Identifiy even and odd  numbers in array ....*/
#include<iostream>
using namespace std;
int main()
{
	int num[]={2,3,4,5,6,7,8,9,10,11,12};
	//int n=sizeof(num)/num[0];
	int n=10;
	for(int i=0;i<n-1;i++)
	{
		if(num[i]%2==0)
		{ 
			cout<<"The value at index "<<i<<" is an even number  "<<num[i]<<endl;
		}
		else
		{
			cout<<"The value at index "<<i<<" is an odd number  "<<num[i]<<endl;
		}
	}
	
	
	
}
