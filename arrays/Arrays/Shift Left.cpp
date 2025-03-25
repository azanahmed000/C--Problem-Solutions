/*Shift Left:* Shift all elements of the array one position to the left.
*/
#include<iostream>
using namespace std;
int main()
{
	int num[]={2,4,6,8,10};
	int n=sizeof(num)/sizeof(num[0]);
	for(int i=0;i<n-1;i++)
	{
		num[i]=num[i+1];
		
	}
	num[n-1]=0;
	cout<<"Elements after left shift is as: ";
	for(int i=0;i<n-1;i++)
	{
		cout<<num[i]<<",";
	}
	
	
	
	
	
	
}
