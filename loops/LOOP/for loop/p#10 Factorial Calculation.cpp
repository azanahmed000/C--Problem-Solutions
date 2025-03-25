/**Factorial Calculation*  
   Write a program to calculate the factorial of a number using a for loop.  
   Example: n = 5 ? Output: 120.
*/

#include<iostream>
using namespace std;
int main()
{
	int num;
	int factorial=1;
	cout<<"Enter the number which factorial want to calculate :"<<endl;
	cin>>num;
	for(int i=1 ;i<=num ;i++)
	{
		factorial=factorial*i;
	}
	cout<<"Factor of the following Number are  :"<<factorial;
	
}
