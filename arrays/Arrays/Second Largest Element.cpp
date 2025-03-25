/**Second Largest Element:* Find the second largest element in the array*/

#include<iostream>
#include<climits>
using namespace std;
int main()
{
		int max=INT_MIN,second_max;
	int num[]={2,3,4,5,6,7,8,9,10,11,12};
	//int n=sizeof(num)/num[0];
	int n=10;
	cout<<"Origanl Arrays :";
	for(int i=0;i<n-1;i++)
	{
		cout<<num[i]<<",";
			
		}
	for(int i=0;i<n-1;i++)
	{
	
		if(num[i]>max)
		{
			second_max=max;
			max=num[i];
			
			
			
		}
		
	}
	cout<<"\nThe Scoend Maximum number is :"<<second_max<<endl;
	cout<<"The Maxium number is "<<max;
}
