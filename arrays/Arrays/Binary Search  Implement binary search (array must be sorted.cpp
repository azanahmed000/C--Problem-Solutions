/*7. *Binary Search:* Implement binary search (array must be sorted*/

#include<iostream>
using namespace std;
int main()
{
	int target;
	cout<<"Enter the number you want to find ";
	cin>>target;
	
	bool found=false;
	int num[15]={0,23,36,54,62,74,81,89,92,99,103,111,123,145,192};
	int low=0;
	int high=14;
	int mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		
		if(num[mid]==target)
		{
			cout<<"The Element found and present in "<<mid;
			found=true;
			break;
		}
		else if(num[mid]>target)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}	
	}
	if(!found)
	{
		cout<<"Element not found !";
	}
	
	
	
	
	
	
	
}

