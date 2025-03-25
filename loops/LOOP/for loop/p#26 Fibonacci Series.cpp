/*11. *Fibonacci Series*  
    Print the first n numbers of the Fibonacci series using a for loop.  
    Example: n = 5 ? Output: 0, 1, 1, 2, 3.
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int series;
	int a=0 ,b=1;
	cout<<"Enter the range of Fibonacci series : ";
	cin>>n;
	
	for(int i=1 ;i<=n ;i++)
	{
		if(i==1)
		{
			cout<<a;
		}
		else if(i==2)
		{
			cout<<','<<b;
		}
		else
		{
			series=a+b;
			cout<<','<<series;
			a=b;
			b=series;
		}
		
		
		
	}
	
}
