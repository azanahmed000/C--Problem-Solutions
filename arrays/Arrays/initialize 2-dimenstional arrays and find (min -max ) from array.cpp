/*initialize 2-dimenstional arrays and find (min -max ) from array */
#include<iostream>
using namespace std;
int main()
{
	int i,j,max,min;
	int arr[4][4]={23,33,11,13,28,19,54,20,46,19,78,99,34,57,15,34};
	for( i=0;i<2;i++)
	{
		max=min=arr[0][0];
		for(  j=0;j<4;j++)
		{
		  if( arr[i][j]>max)
		  {
		  	max=arr[i][j];
		  	
		  }
		  if(arr[i][j]<min)
		  {
		  	min=arr[i][j];
		  }
			
		}
		
		
	}
	cout<<"The Maximum  number is : "<<max<<endl;
	cout<<"The Minimum number is  : "<<min;
	
	
}
