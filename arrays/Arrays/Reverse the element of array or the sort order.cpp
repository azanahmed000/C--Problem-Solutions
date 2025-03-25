/*Reverse the element of array or the sort order */
#include<iostream>
using namespace std;
int main()
{
	
	int num[]={10,20,30,40,50,60,70,80,90,100};
	int n=sizeof(num)/sizeof(num[0]);
	for(int i=0;i<n/2;i++)
	{
		int temp=num[n-i-1];
		num[n-i-1]=num[i];
		num[i]=temp;
	}
	cout<<"Elements after reversing are as :";
	for(int i=0;i<n;i++)
	{
			cout<<num[i]<<" ";
	}

	return 0;
}
