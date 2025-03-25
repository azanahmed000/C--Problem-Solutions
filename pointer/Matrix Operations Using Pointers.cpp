/**Matrix Operations Using Pointers*
Write a program to input a 2x2 matrix using pointers and display its transportation*/
#include<iostream>
using namespace std;
void orignal(int* o,int rows, int cols)
{
	cout << "Original Matrix:" << endl;
	for(int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			
			cout<<*(o + i * cols + j) << " ";
			
		}
		cout<<endl;
	}
}
void transpose(int* t,int rows, int cols)
{
	cout << "Transpose Matrix:" << endl;
	for(int i=0;i<cols;i++)
	{
		for (int j=0;j<rows;j++)
		{
			
			cout<<*(t + j * cols + i) << " ";
			
		}
		cout<<endl;
	}
	
}

int main()
{
	int arr[2][2];
	int rows=2,cols=2;
	for(int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			cout<<"Enter the  value for an array at ["<<i<<"]["<<j<<"]"<<endl;
			cin>>arr[i][j];
			
		}
	}
	orignal(&arr[0][0],rows, cols);
	transpose(&arr[0][0], rows, cols);
	
	
}


