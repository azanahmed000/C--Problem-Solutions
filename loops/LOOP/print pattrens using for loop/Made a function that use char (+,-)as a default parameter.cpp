/*Made a function that use char (+,-)as a default parameter */
#include<iostream>
using namespace std;
int func(int arr[],int n,char s='+')
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		
		if(s=='+')
		{
			if(arr[i]>0)
			{
				sum+=arr[i];	
			}
		}
		else
		{
			if(arr[i]<0)
			{
				sum+=arr[i];
			}
		}
	}
	return sum;
	
}
int main()
{
	int arr[20],dn;
	cout<<"Enter the Dimension : ";
	cin>>dn;
	for(int i=0;i<dn;i++)
	{
		cout<<"Enter any (Positive / negative )numbers : ";
		cin>>arr[i];
		
	}
	int s1=func(arr,dn);
	int s2=func(arr,dn,'-');
	cout<<"The sum of positive number is :  "<<s1;
	cout<<"\n\n\n The sum of negative number is :  "<<s2;
	
	
	
}
