/**Reversing an Array Using Pointers*
Write a program to reverse the elements of an array using pointers.
*/
#include<iostream>
using namespace std;
int main()
{
	float arr[5]={1.1,2.2,3.3,4.4,5.5};
	float *p=&arr[4];
	for(int i=0;i<5;i++)
	{
		cout<<"The array in reverse order is as : "<<*p<<endl;
		*p--;
	}
	
	
	
}
