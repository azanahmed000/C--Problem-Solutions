/*1.Count Digits in a Number
Write a program to count the number of digits in a given number using a for loop.
Example: Input: 4567 ? Output: 4.
*/


#include<iostream>
using namespace std;
int main()
{
	int num,f=0;
	cout<<"Enter the number which number want to calculate :";
	cin>>num;
	for(int n=num ; num>0 ; num/=10)
	{
		f++;
	}
	cout<<"Number of Digits are :"<<f;
}
