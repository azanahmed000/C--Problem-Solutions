/**Sum of Digits*  
   Write a program to calculate the sum of digits of a number using a for loop.  
   Example: Input: 123 ? Output: 6.
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0;
	cout<<"Enter the which sum want to know :";
	cin>>n;
	for(int temp=n ; temp>0; temp/=10)
	{
	  	int digit=temp%10;
	  	sum=sum+digit;
	
	}
	cout<<sum;
	
}
