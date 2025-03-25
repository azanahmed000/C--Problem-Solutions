/*
### 5. *Full Pyramid*

Input: 5
Output:
    *
   ***
  *****
 *******
*********
*/
#include<iostream>
using namespace std;
int main()
{ 
 		int num;
 		cout<<"Enter the number of rows for the Pyramid :";
 		cin>>num;
	for(int i=1; i<=num ;i++)
	{
		
		for(int n=1;n<=num-i;n++)
		{
			cout<< " ";
			
		}
		for(int k=1;k<=(2*i-1);k++)
		{
			cout<<"*";
		}
		cout<<endl;
		
	
		
		
	}
	
	
	
}
