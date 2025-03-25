/*8. *Multiplication Table*  
   Generate the multiplication table of a given number using a for loop.  
   Example: n = 5 ? Output: 5, 10, 15, ..., 50.
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int table;
	cout<<"Enter the number which table want to find :";
	cin>>n;
	for(int i=1 ; i<=15 ; i++)
	{
		table=n*i;
		cout<<table<<"="<<n<<"*"<<i<<endl;
	}
}
