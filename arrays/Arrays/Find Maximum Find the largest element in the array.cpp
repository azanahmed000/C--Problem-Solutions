/**Find Maximum:* Find the largest element in the array.*/

#include<iostream>
using namespace std;
int main()
{
	//The greatest number is 300
	int max=0;
	int j;
	int arr[10]={56,15,45,0,86,130,180,2,300,230};
	for(int i=0;i<=10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			j=i;
		}
		
		
	}
	cout<<"The largest element is the   "<<max<<"  which is present in the arr "<<j;
	
	
	
}
