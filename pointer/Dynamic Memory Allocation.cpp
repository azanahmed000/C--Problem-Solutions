/* *Dynamic Memory Allocation*
Write a program to dynamically allocate memory for an integer, store a value in it, and display the value.
 Then, free the allocated memory.
*/
#include<iostream>
using namespace std;
int main()
{
	int *p=new int ;
	*p=45;
	 cout<<"The new integer store at dynamic memory alocation is : "<<*p;
	 cout<<"\n\n\nThe new integer store at : "<<p;
	 
	 delete p;
	cout<<"\n\n\nThe value  after deletion at : "<<p;
//	p =nullptr;
	
	
	
}
