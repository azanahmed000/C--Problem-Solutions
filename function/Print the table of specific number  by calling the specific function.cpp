/*Print the table of specific number  by calling the specific function */
#include<iostream>
using namespace std;
int table(int i);
int main()
{
	int a;
	cout<<"Enter the specific number which table you want to print : ";
	cin>>a;
	table(a);
	
}
int table(int i)
{
	int c;
	for(c=1;c<=15;c++)
	{
		cout<<i<<" * "<<c<<" = "<<c*i<<endl;
	}
}
