/*### 12. *Check Palindromes*  
Check if numbers from 1 to 1000 are palindromes.  
- Outer loop: Iterates through numbers.  
- Inner loop: Reverses the number and compares with the original.

*/
#include<iostream>
using namespace std;
int main()
{
cout<<"The Palindromes numbers between 1 to 1000 are :"<<endl;
	for(int i=1; i<=1000 ;i++)
	{
			int reverse=0;
			int orignal=i;
			
		
	
		for(int re=i ;re>0; re/=10)
		{
			
			int digit=re%10;
			reverse=reverse*10+digit;
			
			
		}
		if(orignal==reverse)
			{
				cout<<orignal<<endl;
			}
		
	
		
	}
	
}
