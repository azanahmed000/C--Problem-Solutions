/*Pointer to Pointer*
Write a program to demonstrate the concept of a pointer to a pointer by creating a chain of pointers and
 displaying the value of a variable.
*/
#include<iostream>
using namespace std;
int main()
{
	int a=45;
	int *p=&a;
	int **p1=&p;
	cout<<"The value  store in a is as : "<<a<<endl;
	cout<<"The value store at memoey for a is :"<<&a<<endl;
	cout<<"The value  store in a is as : "<<*p<<endl;
	cout<<"The value store at memoey for a is :"<<p<<endl;
	cout<<"The value  store in a is as : "<<**p1<<endl;
	cout<<"The value store at memoey for a is :"<<p1<<endl;
	
	
}
