/*### 7. *Diamond Pattern*

Input: 5
Output:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

 
*/
#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int num;
	cout<<"Enter the the numbers of rows for Diamond pattern :";
	cin>>num;
	int n;
	while(i<=num)
	{
		 n=1;
		while(n<=num-i)
		{
			
			cout<<" ";
			n++;
			
		}
			n=1;
		while(n<=2*i-1)
		{
			cout<<"*";
			n++;	
		}
		cout<<endl;
		i++;
		
		
	}
	i=num-1;
	while(i>=1)
	{
		n=1;
		while(n<=num-i)
		{
			
			cout<<" ";
			n++;
			
		}
			n=1;
		while(n<=2*i-1)
		{
			cout<<"*";
			n++;
		}
		cout<<endl;
		i--;
		
		
		
	}
	
	
	
	
	
	
}
