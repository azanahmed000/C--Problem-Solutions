/*Show fibonicachi series using recursion function */
#include<iostream>
using namespace std;
int fibonich(int n)
{
	if(n==0)return 0;
	if(n==1)return 1;
	return fibonich(n-1)+fibonich(n-2);
}
int main()
{
	int n;
	cout<<"Enter the number of fibononichi series want to show : ";
	cin>>n;
	cout<<"Fibonichi series upto "<<n<<" is  ";
	
	for(int i=0;i<n;i++)
	{
		cout<<fibonich(i)<<"   ";
		
	}
	
}
