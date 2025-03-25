/* *Delete Element:* Delete an element from a specific position in the array.
.
*/
#include<iostream>
using namespace std;
int main()
{
	int num[]={5,10,15,20,25,30,35,40,45,50};
	int n=sizeof(num)/sizeof(num[0]);
	int position;

	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<",";
	}
	
	
	cout<<"\n\nEnter the positon at which you want delete element ";
	cin>>position;
	if(position>=n)
	{
		cout<<"Invalid insertion "<<endl;
		return(0);
	}
	else
	{
		for(int i=position;i<n-1;i++)
		{
			num[i]=num[i+1];
		}
			
	}

	

	n--;
	
		for(int i=0;i<n;i++)
		{
			cout<<num[i]<<",";
		}
}
