/*Addition of martrices*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,c[2][4];
	int a[2][4]={3,4,56,7,8,7,4,3};
	int b[2][4]={2,4,54,1,5,12,79,0};
	cout<<"The matrix a is :      "<<"            The matrix b is :"<<endl;    
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
				
		}

		cout<<"   ";
		for(j=0;j<4;j++)
		{
			cout<<  b[i][j]<<"\t";
				
		}
		cout<<endl;
		
	}
	cout<<"\n\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<"\t"<<c[i][j];
			
				
		}
		cout<<endl;
		
	}
	

	
}
