/*print the same numers in rows and columns */

#include<iostream>
using namespace std;
int main()
{
	int num=0;
	for(int i=1;i<=3;i++)
	{
		for(int r=1; r<=3;r++)
		{
			
			num++;
			if(num<=1)
			{
			cout<<num<<"\t";	
			}
			else
			{
				num=1;
				cout<<num<<"\t";
			}
			
			
			
		}
		cout<<endl;
	
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
