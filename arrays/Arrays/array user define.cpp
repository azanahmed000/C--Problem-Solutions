/*Insertion sort */
#include<iostream>
using namespace std;
int main()
{
	int index;
	int n;
	cout<<"Enter length of the array   ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>n;
	}
	
	int num[n];
	//nt n=sizeof(num)/sizeof(num[0])
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(num[j+1]>num[j])
			{
				index=num[j+1];
				num[j]=num[j+1];
				num[j+1]=index;
				
				
			}
			
		}
		
	}
	cout<<"Sorted array ";
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
	
	
	
	
}
