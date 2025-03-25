/*### 4. *Reverse Number Pyramid*

Input: 5
Output:
12345
1234
123
12
1
*/
#include<iostream>
using namespace std;
int main()
{
	for(int i=5;i>=1;i--)
	{
		for(int n=1;n<=i;n++)
		{
			cout<<n;
		}
		cout<<endl;
		
		
	}
	
	
	
}
