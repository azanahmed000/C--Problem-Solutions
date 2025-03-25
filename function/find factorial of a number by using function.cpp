/*find factorial of a number by using function */
#include<iostream>
using namespace std;
int fact(int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
	{
		k*=i;
	}
	
	cout<<"Factorial of "<<n<<" is "<<k;
	
}
int main()
{
	int x;
	cout<<"Enter the number which factorial you want to find  :  ";
	cin>>x;
	fact(x);
}
