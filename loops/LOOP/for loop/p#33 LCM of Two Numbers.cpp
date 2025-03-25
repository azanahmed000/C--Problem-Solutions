/*### 5. *LCM of Two Numbers*  
Find the Least Common Multiple (LCM) of two numbers using nested loops.  
- Outer loop: Iterates potential multiples.  
- Inner loop: Checks if the multiple is divisible by both numbers.
*/

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the First number: ";
	cin>>a;
	cout<<"Enter the Second number: ";
	cin>>b;
	
	for(int i=2;i<=1000;i++)
	{
		if(i%a==0 && i%b==0)
		{
			cout<<i;
			break;
		}
	}	
}
