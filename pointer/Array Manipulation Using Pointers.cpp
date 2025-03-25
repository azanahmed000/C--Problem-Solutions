/**Array Manipulation Using Pointers*
Write a program to input 5 integers into an array and display them using a pointer.
*/
#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	int *arrp=arr;
	for(int i=0;i<5;i++)
	{
		cout<<*arrp<<endl;
		*arrp++;
	}
	
	
}
