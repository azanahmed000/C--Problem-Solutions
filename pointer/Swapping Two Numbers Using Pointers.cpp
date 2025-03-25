/* *Swapping Two Numbers Using Pointers*
Write a program that swaps two numbers using pointers. The function should take two integer pointers
 as arguments.
*/
#include<iostream>
using namespace std;
int main()
{
	
	int a=25;
	int b=35;
	int *p1=&a;
	int *p2=&b;
	cout<<"The value of a is : "<<*p1<<"\n\nThe value of b is : "<<*p2<<endl<<endl;
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	cout<<"The value of a is : "<<*p1<<"\n\nThe value of b is : "<<*p2;
	
}
