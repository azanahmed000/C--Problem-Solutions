/*Shift Right:* Shift all elements of the array one position to the right.
*/
#include<iostream>
using namespace std;
int main()
{
	int num[]={2,4,6,8,10};
	int n=sizeof(num)/sizeof(num[0]);
	for(int i=n-1;i>0;i--)
	{
		num[i]=num[i-1];
		
	}
	num[0]=0;
	cout<<"Elements after left shift is as: ";
	for(int i=1;i<n;i++)
	{
		cout<<num[i]<<",";
	}
	
	
	
	
	
	
}
