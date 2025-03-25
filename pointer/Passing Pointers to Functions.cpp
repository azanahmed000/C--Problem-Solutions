/*Passing Pointers to Functions*
Write a program where a function takes a pointer to an integer as an argument and increments its value by 10.

*/
#include<iostream>
using namespace std;
int pfunction(int* x)
{
	*x+=10;
	cout<<"The value of variable after increament  is :"<<*x;
}
int main()
{
	int n;
	cout<<"Enter any value for the varrible to store : ";
	cin>>n;
	pfunction(&n);
	
	
	
}
