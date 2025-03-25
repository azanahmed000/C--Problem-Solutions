/*## 2. *Inverted Right-Angled Triangle*

Input: 5
Output:
*****
****
***
**
*
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	
	for(int i=5 ;i>=1;i--)
	{
		for(int c=1 ; c<=i ;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
}
