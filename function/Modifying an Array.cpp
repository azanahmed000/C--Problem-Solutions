/**Modifying an Array*  
   Write a function to double the elements of an array using pass-by-reference.  

   cpp
   void doubleArray(int (&arr)[5]);
   
*/
#include<iostream>
using namespace std;

int updatedarr(int (&arr)[4])
{
	cout<<"Update the Array:\n";
	arr[4]={5,6,7,8,9};
	
	
}
main()
{
	int arr[4]={1,2,3,4,5};
	for(int i=0;i<=4;i++)
	{
		cout<<"AArray is "<<arr[i];
	}
	updatedarr(arr[4]);
	cout<<"New updated array is ";
	for(int i=0;i<=4;i++)
	{
		cout<<"AArray is "<<arr[i];
	}
}

