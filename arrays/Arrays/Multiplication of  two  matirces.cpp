/*Multiplication of  two  matirces */

#include<iostream>
using namespace std;
int main()
{
	int row1,row2,colu1,colu2;
	
	
	cout<<"Enter the number of rows and coloumns of first matrices :"<<endl;
	cin>>row1>>colu1;
	cout<<"Enter the number of rows and coloumns of second matrices :"<<endl;
	cin>>row2>>colu2;
	
	int a[row1][colu1],b[row2][colu2],c[row1][colu2];
	if(row1 !=colu2)
	{
		cout<<"The multiplication of two matrices are not possible :"<<endl;
		return(0);
		
	}
	cout<<"Enter the values of first matrices :"<<endl;
	
	for( int i=0;i<row1;i++)
	{
		for(int j=0;j<colu1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the values of second matrices :"<<endl;
	
	for( int i=0;i<row2;i++)
	{
		for(int j=0;j<colu2;j++)
		{
			cin>>b[i][j];
		}
	}
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<colu2;j++)
		{
			c[i][j]=0;
		}
	}
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<colu2;j++)
		{
			for(int k=0;k<colu1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	
	}
	cout<<"Multiplication  of  matrices (a * b )is as :"<<endl;
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<colu2;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
}
