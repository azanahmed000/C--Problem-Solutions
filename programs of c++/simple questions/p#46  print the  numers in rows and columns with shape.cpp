/*print the  numers in rows and columns with different style */

#include<iostream>
#include<iomanip.>
using namespace std;
int main()
{

	int num=4;
	for(int i=1;i<=4 ; i++)
	{
		
		for(int r=1; r<=4; r++)
		{
			if(r<=num-1)
			{
				cout<<" ";
			}
			else
			{
				cout<<i;
			}
		
		
	}
		cout<<endl;
}
	
}
