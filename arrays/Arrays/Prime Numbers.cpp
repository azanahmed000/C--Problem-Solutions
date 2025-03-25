/*Prime Numbers:* Identify all prime numbers in the array.
*/
#include<iostream>
using namespace std;
int main()
{
	int num[]={2,3,4,5,6,7,8,9,10,11,12};
	//int n=sizeof(num)/num[0];
	int n=10;
	cout<<"Orignal array :";
	for(int i=0;i<n-1;i++)
	{
		cout<<num[i]<<",";
	}
	for(int i=0;i<n-1;i++)
	{
	
		for(int k=2;k<num[i]/2;i++)
		{
			if(num[i]%k!=0)
		{ 
			cout<<"\n\nThe value at index "<<i<<" is an Prime number  "<<num[i]<<endl;
		}
		
		}
		
	}
	
	
}
