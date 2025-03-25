/*Reference to Arrays*  
   Write a function to reverse the elements of an array using a reference to the array.  

   cpp
   void reverseArray(int (&arr)[10]);
   
*/
/*Reference to Arrays*  
   Write a function to reverse the elements of an array using a reference to the array.  

   cpp
   void reverseArray(int (&arr)[10]);
   
*/
#include<iostream>
using namespace std;
int reversearr(int (&arr)[10])
{
	for(int i=0;i<10/2;i++)
	{
		int temp=arr[i];
		arr[i]=arr[9-i];
		arr[9-i]=temp;
		
	}
		
	
}
int main()
{
	int j[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"The  Oringnal arrays element's are  : ";
	for(int i=0;i<10;i++)
	{
		cout<<j[i]<<", ";
		
	}
	cout<<"\n\n\n\nElements after swapping is as : ";
	reversearr(j);
	for(int i=0;i<10;i++)
	{
		cout<<j[i]<<", ";
		
	}
	
	
}
