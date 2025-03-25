/*### 1. *Right-Angled Triangle*

Input: 5
Output:
*
**
***
****
*****

*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	
	for(int i=1;i<=5;i++)
	{
		for(int c=1 ; c<=i ;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
}
