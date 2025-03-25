/*Sum of Cubes of Natural Numbers
Calculate the sum of cubes of the first n natural numbers.
Example: Input: n = 3 ? Output: 36 (1³ + 2³ + 3³ = 36).
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	int n,sum=0;
	
	cout<<"Enter the last natural numbers :";
	cin>>num;
	
	for(int i=n; i<=num ;i++)
	{
		
		sum=sum+i*i*i;
		
	}
	cout<<"Cube of all these natural number are :"<<sum;
	
}
