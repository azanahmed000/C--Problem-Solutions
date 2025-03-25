/*9. *Selection Sort:* Sort the array using the selection sort algorithm.
*/
#include<iostream>
using namespace std;
int main()
{
	int num[]={12,43,5,1,84,33,22,44,77,64};
	int n=sizeof(num)/sizeof(num[0]);
	for(int i=0;i<n-1;i++)
	{
		int index=i;
		for(int j=i+1;j<n;j++)
		{
			if(num[j]<num[index])
			{
				index=j;	
			}
		}
		if(index!=i)
		{
			int temp=num[i];
			num[i]=num[index];
			num[index]=temp;
		}
	}
	cout<<"Sorted array ";
	for(int k=0;k<n;k++)
	{
		cout<<num[k]<<" ";
	}
		
	
	
}
