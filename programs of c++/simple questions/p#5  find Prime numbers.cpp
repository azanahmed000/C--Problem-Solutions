#include<iostream>
using namespace std;

int main()
{
	cout<<"Prime numbers are :"<<endl;
	int num;
	
	for(int num=1; num<=100 ;num++)
	{
		if(num%1==0 && num%num==0 !& num%2>=num/2)
		{
			cout<<num<<"\t";
		}
		
	}










}
