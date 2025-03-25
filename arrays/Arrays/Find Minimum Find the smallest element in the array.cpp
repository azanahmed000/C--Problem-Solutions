/**Find Minimum:* Find the smallest element in the array*/

#include<iostream>
using namespace std;
int main()
{
	//The minimum number is 4
	int min=240;
	int j;
	int arr[10]={56,15,45,4,86,130,180,28,300,230};
	for(int i=0;i<=10;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			j=i;
		}
		
		
	}
	cout<<"The smallest element is the   "<<min<<"  which is present in the arr "<<j;
	
	
	
}
