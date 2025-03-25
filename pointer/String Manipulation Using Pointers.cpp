/*String Manipulation Using Pointers*
Write a program to calculate the length of a string using pointers.
*/
#include<iostream>
using namespace std;
int main()
{
	char name[]="azan ahmed";
	char *pname=name;
	int length=0;
	while(*pname !=0)
	{
		*pname++;
		length++;
		
	}
	cout<<"The number of character store in character name is upto :"<<length;
	
	
}
