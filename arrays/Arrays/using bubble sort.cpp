/*using bubble sort*/
#include<iostream>
using namespace std;
int main()
{
	int num[]={12,10,22,36,57,44,69,15,87,75};
	 int n=sizeof(num)/sizeof(num[0]);
	bool swap;
	 
	for(int i=0;i<n-1;i++)
	{ 
		swap=false;
		for(int j=0;j<n-i-1;j++)
		{
			if(num[j]>num[j+1])	
			{
				int temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
				swap=true;
			}
			
		}
		if(!swap)break;
		
		
	}
		cout<<"The number after swapping is like "<<endl;
	for(int k=0;k<n;k++)
	{
		cout<<num[k]<<" ";
	}
	
	
}					
