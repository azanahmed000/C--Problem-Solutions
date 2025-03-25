/*Basic Pointer Declaration and Dereferencing*
Write a program to declare a pointer to an integer, assign it the address of a variable, and display
 the value of the variable using the pointer.

*/
#include<iostream>
using namespace std;
int main()
{
	int a=4;
int *ptr;
cout<<"Enter the integer value : ";
cin>>a;
ptr=&a;
cout<<"The address of a is as : "<<ptr<<endl;
cout<<"The value of a is as   : "<<*ptr<<endl;
}



