/*### 1. *Print Table of Each Number*  
Generate and print tables for numbers 1 to 10 using nested loops.  
Example:  

1 x 1 = 1, 1 x 2 = 2 ... up to 1 x 10  
2 x 1 = 2, 2 x 2 = 4 ... up to 2 x 10
*/

#include<iostream>
using namespace std;
int main()
{
	;
 	cout<<"Table from 1 to 10 are :"<<endl;
 	for(int i=1; i<=10;i++)
 	{
 		
 		for(int num=1;num<=10;num++)
 		{ 
 			int table=i*num;
 			cout<<i<<"*"<<num<<"="<<table<<"\t    ";
 			
 			
 			
		}
		cout<<endl<<endl;
		
	}
	
	
}
