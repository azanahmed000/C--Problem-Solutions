/*Convert a String to Uppercase
Write a program to convert all lowercase characters in a string to uppercase using a for loop.
Example: Input: hello ? Output: HELLO.*/
#include <iostream>
using namespace std;

int main() 
{
	char ch;
	
	cout<<"Enter the charcters  (enter '.' at the end !) : ";
	
	
	for(;;)
	{
	cin>>ch;
	if(ch=='.')
	
		break;
	
	if(ch>='a' && ch<='z' )
	
		ch=ch-('a'-'A');
	
	cout<<ch;
	}
	
}
   

