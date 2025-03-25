/*Insertion sort */
#include<iostream>
using namespace std;
int main()
{
	int index;
	
	int num[]={23,33,1,5,76};
	int n=sizeof(num)/sizeof(num[0]);
	for(int i=0;i<n;i++)
	{
		int j;
		index=num[i];
		for( j=i-1;j>=0&& num[j]>index;j--)
		{
			num[j+1]=num[j];
		}
			num[j+1]=index;
		
	}
	cout<<"Sorted array ";
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
	
	
	
	
}
