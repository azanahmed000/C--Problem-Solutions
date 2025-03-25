/*Make  a matrix of 2 and 4 coloumns*/
#include<iostream>
using namespace std;
int main()
{
	int arr[2][4],i,j;
	cout<<"Enter the values of arrys :\n ";
	for( i=0;i<2;i++)
	{
		for( j=0;j<4;j++)
		{
			cin>>arr[i][j];
			
		}
		
		
	}
	cout << "The matrix is:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<arr[i][j]<<"\t";
				
		}
		cout<<endl;
		
	}
	
	
	
	
	
	
}
