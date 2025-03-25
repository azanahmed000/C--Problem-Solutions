/*print the  numers in rows and columns with different style */

#include<iostream>
#include<iomanip.>
using namespace std;
int main()
{

	int num=4;
	for(int i=1;i<=4 ; i++)
	{
		
		for(int r=i; r<=num-1; r++)
		{
			
			
				cout<<"    ";
			
			
		}
		for(int k=1;k<=i ;k++)
		{
			cout<<k<<"   ";
		}
		cout<<endl;
	    
		
		
		
		
	}
}
