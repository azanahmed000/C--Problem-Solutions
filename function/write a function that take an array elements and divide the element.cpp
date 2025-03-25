/*write a function that take an array elements and divide the element 
which are divisible by 5 and multiply remaining elements*/
#include<iostream>
using namespace std;
int change(int arr[],int n );
 int main()
{
	
	int n;
	cout<<"Enter the size of array : ";
	int arr[n];
	cin>>n;
	cout<<"Enter the value of elements in array : \n\n\n\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The array is look like as : \n\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" , ";
	}
	cout<<"Arrays elements after updation is as :\n\n";	
	 change( arr, n);
}
int change(int arr[] ,int n)
{

	for(int i=0;i<n;i++)
	{
		if(arr[i]%5==0)
		{
			arr[i]=arr[i]/5;
		}
		else
		{
			arr[i]*=2;
		}
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" , ";
	}	
	

}
