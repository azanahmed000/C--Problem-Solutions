/*find the pressessor and successor of a number */
#include<iostream>
using namespace std;
int place(int x)
{
	int a,b;
	a=x+1;
	b=x-1;
	cout<<"The number after "<<x<<" is: "<<a<<endl;
	cout<<"The number before "<<x<<" is :"<<b;
	
	
}
int main()
{
	int n;
	cout<<"Enter the number which preccessor and successor want to find :  ";
	cin>>n;
	
	place(n);
	
}
